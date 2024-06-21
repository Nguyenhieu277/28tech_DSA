#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int dp[max_n][max_n];
void dynamicAlgorithm(string s, string t){
    int n = s.size(), m = t.size();
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0; 
            }
            else{
                if(s[i - 1] == t[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else{
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
    }
    cout << dp[n][m] << endl;
}
int main(){ 
    quick();
    string s, t;
    cin >> s >> t;
    dynamicAlgorithm(s, t);
    return 0;
}