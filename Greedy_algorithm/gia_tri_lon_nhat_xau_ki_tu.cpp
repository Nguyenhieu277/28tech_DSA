#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int k;
    cin >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for(char it : s){
        mp[it]++;
    }
    priority_queue<int> pq;
    for(auto it : mp){
        pq.push(it.second);
    }
    while(k > 0 && !pq.empty()){
        int top = pq.top();
        pq.pop();
        if(top > 0){
            k--;
            top--;
            if(top > 0){
                pq.push(top);
            }
        }
    }
    ll res = 0;
    while(!pq.empty()){
        int ans = pq.top();
        pq.pop();
        res += (ll)ans * ans;
    }   
    cout << res << endl;
    return 0;
}