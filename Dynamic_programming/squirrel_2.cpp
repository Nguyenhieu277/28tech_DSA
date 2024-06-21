#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void dynamicAlgorithm(ll a[], int n, int k){
    vector<ll> dp(n + 1, LLONG_MAX);
    dp[1] = 0;
    for(int i = 2; i <= n; i++){
        for(int j = max(1, i - k); j < i; j++){
            dp[i] = min(dp[i], dp[j] + abs(a[i - 1] - a[j - 1]));
        }
    }
    cout << dp[n] << endl;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    dynamicAlgorithm(a, n, k);
    return 0;
}