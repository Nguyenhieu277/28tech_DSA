#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


void DynamicAlgorithm(int a[], int n){
    ll dp[n] = {0};
    dp[0] = 0;
    dp[1] = abs(a[1] - a[0]);
    for(int i = 2; i < n; i++){
        dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]), dp[i - 2] + abs(a[i] - a[i - 2]));
    }
    cout << dp[n - 1] << endl;
}
int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    DynamicAlgorithm(a, n);
    return 0;
}