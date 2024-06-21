#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool check(string s){
    map<char, int> mp;
    for(char it : s){
        mp[it]++;
    }
    priority_queue<pair<int, char>> pq;
    for(auto it : mp){
        pq.push({it.second, it.first});
    }
    string res = "";
    pair<int, char> prev = {0, '#'};
    while(!pq.empty()){
        auto top = pq.top();
        pq.pop();
        res += top.second;
        if(prev.first > 0){
            pq.push(prev);
        }
        top.first--;
        prev = top;
    }
    // cout << res << endl;
    return res.size() == s.size();
}
int main(){
    quick();
    string s;
    cin >> s;
    if(check(s)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}