#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 10001
#define MAX 10001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int prime[max_n];
void sieve(){
    for(int i = 2; i <= max_n; i++){
        prime[i] = 1;
    }
    for(int i = 2; i <= sqrt(max_n); i++){
        if(prime[i]){
            for(int j = i * i; j <= max_n; j += i){
                prime[j] = 0;
            }
        }
    }
}
void solve(){
    int s, t;
    cin >> s >> t;
    int visited[MAX];
    queue<pair<int, int>> q;
    memset(visited, 0, sizeof(visited));
    q.push({s, 0});
    visited[s] = 1;
    while(!q.empty()){
        auto x = q.front();
        q.pop();
        int u = x.first, step = x.second;
        if(u == t){
            cout << step << endl;
            return;
        }
        string s = to_string(u);
        for(int i = 0; i < s.size(); i++){
            string tmp = s;
            char j;
            if(i == 0) j = '1';
            else j = '0';
            for(char c = j; c <= '9'; c++){
                tmp[i] = c;
                int num = stoi(tmp);
                if(prime[num] && !visited[num]){
                    q.push({num, step + 1});
                    visited[num] = 1;
                }  
            }
        }
    }
}
int main(){
    Quick();
    sieve();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}