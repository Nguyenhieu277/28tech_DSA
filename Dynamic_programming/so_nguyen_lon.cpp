#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    ll dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    // for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= m; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[n][m] << endl;
    return 0;
}