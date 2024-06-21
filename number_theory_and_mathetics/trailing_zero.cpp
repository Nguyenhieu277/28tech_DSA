#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/
ll legendre(ll n, int p){
    ll res = 0;
    for(ll i = p; i <= n; i *= p){
        res += (n / i);
        res %= mod;
    }
    return res;
}
int main(){
    quick();
    ll n;
    cin >> n;
    cout << legendre(n, 5) << endl;
    return 0;
}
