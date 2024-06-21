#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll legendre(ll n, int p){
    ll res = 1;
    for(int i = p; i <= n; i *= p){
        res *= n / i;
    }
    return res;
}

int main(){
    ll n;
    cin >> n;
    ll lastDigits = legendre(n, 5);
    cout << lastDigits << endl;
    for(int i = 0; i < lastDigits; i++){
        n /= 10;
    }
    cout << n << endl;
    cout << n % 10 << endl;
    return 0;
}