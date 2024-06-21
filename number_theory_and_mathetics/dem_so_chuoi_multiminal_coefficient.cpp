#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

//multiminal coefficient: n!/(n1!.n2!....nk!).
//(n la tong ki tu, n1: so lan xuat hien ki tu 1, n2: so lan xuat hien ki tu 2..)
ll factorial(ll n){
    vector<ll> f(n + 1, 1);
    f[1] = 1;
    for(int i = 2; i <= n; i++){
        f[i] = (f[i - 1] % mod) * (i % mod);
        f[i] %= mod;
    }
    return f[n];
}
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
ll multiminalCoefficient(string s){
    vector<ll> mark(26, 0);
    for(int i = 0; i < s.size(); i++){
        mark[s[i] - 'a']++;
    }
    ll fact = 1;
    for(int i = 0; i < mark.size(); i++){
        if(mark[i] > 0){
            fact *= factorial(mark[i]) % mod;
            fact %= mod;
        }
    }
    ll res = factorial(s.size());
    ll factor = binaryPower(fact, mod - 2);//modularInverse
    res = (res % mod) * (factor % mod);
    res %= mod;
    return res;
}
int main(){
    quick();
    string s;
    cin >> s;
    cout << multiminalCoefficient(s) << endl;
    return 0;
}