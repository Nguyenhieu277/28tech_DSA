#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    ll a, b, n;
    cin >> a >> b >> n;
    ll left = 0, right = 1e18;
    ll ans = -1;
    while(left <= right){
        ll mid = (left + right) / 2;
        ll x = mid / a, y = mid / b;
        if(x >= (double) n / y){
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << ans << endl;
    return 0;
}