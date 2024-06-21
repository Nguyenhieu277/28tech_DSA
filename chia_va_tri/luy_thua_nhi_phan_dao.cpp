#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll palindormic(ll n){
    ll res = 0;
    while(n != 0){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
ll binPow(ll n, ll k){
    if(k == 0){
        return 1;
    }
    ll x = binPow(n, k / 2);
    x %= mod;
    if(k & 1){
        return ((x * x % mod) * n % mod) % mod;
    }
    else return (x * x % mod) % mod;
}
int main(){
    quick();
    ll n;
    cin >> n;
    ll m = palindormic(n);
    cout << binPow(n, m) << endl;
    return 0;
}