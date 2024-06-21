#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void LCS(string x, string y, string z) {
    int n = x.size(), m = y.size(), o = z.size();
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(o + 1, 0)));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = 1; k <= o; k++) {
                if (x[i - 1] == y[j - 1] && y[j - 1] == z[k - 1] && x[i - 1] == z[k - 1]) {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                } else {
                    dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
                }
            }
        }
    }
    cout << dp[n][m][o] << endl;
}

int main() {
    quick();
    string x, y, z;
    cin >> x >> y >> z;
    LCS(x, y, z);
    return 0;
}
