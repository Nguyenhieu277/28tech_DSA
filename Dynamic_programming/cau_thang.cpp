#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void Dp(int n, int k){
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j <= k; j++){
            if(i - j >= 0){
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }
    cout << dp[n] << endl;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    Dp(n, k);
    return 0;
}