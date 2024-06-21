#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll binaryPower(ll a, ll b){
    ll res = 1;
    a %= mod;
    while(b != 0){
        if(b & 1){
            res *= (a % mod);
            res %= mod;
        }
        b >>= 1;
        a *= (a % mod);
        a %= mod;
    }
    return res;
}
ll factorial(ll n){
    vector<ll> f(n + 1);
    f[0] = f[1] = 1;
    for(ll i = 2; i <= n; i++){
        f[i] = (i % mod) * (f[i - 1] % mod);
        f[i] %= mod;
    }
    return f[n];
}
ll binomialCoefficient(ll n, ll k){
    ll res = factorial(n);
    ll denominator = (factorial(n - k) % mod) * (factorial(k) % mod);
    denominator %= mod;
    res *= (binaryPower(denominator, mod - 2) % mod);
    res %= mod;
    return res;
}
int main(){
    quick();
    ll n, k;
    cin >> n >> k;
    cout << binomialCoefficient(n, k) << endl;
    return 0;
}