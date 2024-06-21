#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void primeFactorization(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        int mu = 0;
        while(n % i == 0){
            n /= i;
            mu++;
        }
        if(mu != 0){
            cout << i << "^" << mu;
            if(n > 1) cout << " * ";
        }
    }
    if(n > 1) cout << n << "^1";
}
int main(){
    quick();
    ll n;
    cin >> n;
    primeFactorization(n);
    return 0;
}
