#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
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
int main(){
    quick();
    ll a, b;
    cin >> a >> b;
    cout << binaryPower(a, b) << endl;
    return 0;
}