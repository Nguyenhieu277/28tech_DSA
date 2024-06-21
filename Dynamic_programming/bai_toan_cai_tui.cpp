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
    int w[n + 1], v[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> w[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    int dp[n + 1][s + 1];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= s; j++){
            dp[i][j] = dp[i - 1][j];
            if(j >= w[i]){
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= s; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[n][s] << endl;
    return 0;
}