#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    dp[1][1] = a[1][1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int maxVal = max(dp[i - 1][j], max(dp[i][j - 1], dp[i - 1][j - 1]));
            dp[i][j] = a[i][j] + maxVal;
        }
    }
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= m; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[n][m] << endl;
    return 0;
}