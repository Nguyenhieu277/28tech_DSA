#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void convert(string &s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            s[i] = ' ';
        }
    }
}
bool cmp(pair<string, int> a, pair<string, int> b){
    return a.second > b.second;
}
int main(){
    quick();
    string s;
    cin >> s;
    convert(s);
    vector<pair<string, int>> v;
    stringstream ss(s);
    string word;
    while(ss >> word){
        v.push_back({word, word.size()});
    }
    sort(v.begin(), v.end(), cmp);
    int ans = 0;
    for(int i = 0; i < v.size(); i += 2){
        ans += v[i].second;
    }
    cout << ans << endl;
    return 0;
}