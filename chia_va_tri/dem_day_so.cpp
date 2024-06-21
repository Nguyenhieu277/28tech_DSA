#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll binPow(ll a, ll n){
    if(n == 0){
        return 1;
    }
    ll x = binPow(a, n / 2);
    x %= mod;
    if(n & 1){
        return ((x * x % mod) * (a % mod)) % mod;
    }
    else return (x * x % mod) % mod;
}
int main(){
    quick();
    ll n;
    cin >> n;
    cout << binPow(2, n - 1) << endl;
    return 0;
}