#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll primeFactorization(ll n){
    vector<ll> v;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            v.push_back(i);
            n /= i;
        }
    }
    if(n > 1) v.push_back(n);
    return v[v.size() - 1];
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << primeFactorization(n) << endl;
    }
    return 0;
}