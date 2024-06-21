#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void primeFactorization(ll n){
    map<ll, ll> mp;
    for(int i = 2; i <= sqrt(n); i++){
        ll mu = 0;
        while(n % i == 0){
            n /= i;
            mu++;
        }
        mp[i] = mu;
    }
    if(n > 1) mp[n] = 1;
    ll maxPower = -1e9;
    for(auto it : mp){
        if(maxPower < it.second){
            maxPower = it.second;
        }
    }
    for(auto it : mp){
        if(it.second == maxPower){
            cout << it.first << " " << it.second << endl;
            break;
        }
    }
}
int main(){
    quick();
    ll n;
    cin >> n;
    primeFactorization(n);
    return 0;
}