#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, s;
    cin >> n >> s;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    ll dp[s + 1] = {0};
    dp[0] = 0;
    for(int i = 1; i <= s; i++){
        dp[i] = 1e9;
        for(int coin : v){
            if(i >= coin) dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }
    if(dp[s] == 1e9){
        cout << -1 << endl;
    }
    else cout << dp[s] << endl;
    return 0;
}