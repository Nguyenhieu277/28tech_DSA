#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll binPow(ll a, ll n) {
    if (n == 0) {
        return 1;
    }
    a %= mod;
    ll x = binPow(a, n / 2);
    x = (x * x) % mod;
    if (n % 2 != 0) {
        x = (x * a) % mod;
    }
    return x;
}

int main() {
    quick();
    ll a, n;
    cin >> a >> n;
    cout << binPow(a, n) << endl;
    return 0;
}
