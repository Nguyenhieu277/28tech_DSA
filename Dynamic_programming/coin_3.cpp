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
    vector<int> dp(s + 1, 0);
    dp[0] = 1;
    for(int coin : v){
        for(int i = coin; i <= s; i++){
            dp[i] += dp[i - coin];
            dp[i] %= mod;
        }
    }
    cout << dp[s] << endl;
    return 0;
}
