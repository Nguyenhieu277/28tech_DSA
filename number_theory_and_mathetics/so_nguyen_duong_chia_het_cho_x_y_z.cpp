#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll gcd(ll a, ll b){
    if(a == 0 || b == 0){
        return a;
    }
    else return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}
int main(){
    quick();
    ll x, y, z, n;
    cin >> x >> y >> z >> n;
    ll bcnn = lcm(x, lcm(y, z));
    ll p1 = pow(10, n - 1), p2 = pow(10, n);
    ll res = ((p1 - 1 + bcnn) / bcnn) * bcnn;
    if(res >= p2) cout << -1 << endl;
    else cout << res << endl;
    return 0;
}