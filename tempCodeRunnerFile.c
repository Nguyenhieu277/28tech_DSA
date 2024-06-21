#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int countWaysToClimbStairs(int N, int K) {
    vector<int> dp(N + 1, 0);
    dp[0] = 1;  // Có 1 cách để ở vị trí bắt đầu

    // Duy trì tổng số cách của các bước trong phạm vi K
    int sum = dp[0];
    
    for (int i = 1; i <= N; ++i) {
        dp[i] = sum;
        cout << sum << " ";
        if (i >= K) {
            sum = (sum - dp[i - K] + MOD) % MOD; // Loại bỏ cách đã quá xa K bước
        }
        sum = (sum + dp[i]) % MOD; // Thêm cách mới
    }
    for(int i = 0; i <= N; i++){
        cout << dp[i] << " ";
    }
    cout << endl;
    return dp[N];
}

int main() {
    int N, K;
    cin >> N >> K;
    cout << countWaysToClimbStairs(N, K) << endl;
    return 0;
}
