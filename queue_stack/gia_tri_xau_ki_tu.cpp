#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    Quick();
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        string s; 
        cin >> s;
        map<char, int> mp;
        for(char it : s){
            mp[it]++;
        }
        priority_queue<int> q;
        for(auto it : mp){
            q.push(it.second);
        }
        while(k-- && !q.empty()){
            int x = q.top();
            q.pop();
            if(x - 1 > 0){
                q.push(x - 1);
            }
        }
        ll res = 0;
        while(!q.empty()){
            int x = q.top();
            q.pop();
            res += 1ll * x * x;
        }
        cout << res << endl;
    }
    return 0;
}