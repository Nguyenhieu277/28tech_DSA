#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isSphenic(ll n){
    vector<ll> v;
    for(ll i = 2; i <= sqrt(n); i++){
        ll mu = 0;
        while(n % i == 0){
            n /= i;
            mu++;
        }
        if(mu > 1) return false;
        else if(mu == 1) v.push_back(i);  
    }
    if(n > 1) v.push_back(n);
    return v.size() == 3;
}
int main(){
    ll n;
    cin >> n;
    if(isSphenic(n)){
        cout << 1 << endl;
    }
    else cout << 0 << endl;
    return 0;
}
