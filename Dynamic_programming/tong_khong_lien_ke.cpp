#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    if(n == 0){
        cout << 0 << endl;
        return 0;
    }
    
    if(n == 1){
        cout << a[0] << endl;
        return 0;
    }
    ll dp[n];
    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);
    for(int i = 2; i < n; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    }
    cout << dp[n - 1] << endl;
    return 0;
}
