#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll legendre(int p, int n){
    ll res = 0;
    for(int i = p; i <= n; i *= p){
        res += (n / i);
    }
    return res;
}
bool isPrime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true; 
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i <= sqrt(n); i += 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
ll theNumberOfDivisors(int n){
    ll res = 1;
    for(int i = 1; i <= n; i++){
        if(isPrime(i)){
            res *= (legendre(i, n) + 1) % mod;
            res %= mod;
        }
    }
    return res;
}
int main(){
    quick();
    int n;
    cin >> n;
    cout << theNumberOfDivisors(n) << endl;
    return 0;
}