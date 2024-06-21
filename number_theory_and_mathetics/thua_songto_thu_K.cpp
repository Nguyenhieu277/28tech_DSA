#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll primeFactor(ll n, ll k){
    vector<ll> v;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
                v.push_back(i);
            }
        }
    }
    if(n > 1) v.push_back(n);
    if(v.empty() || k > v.size()) return -1;
    else return v[k - 1];
}
int main(){
    quick();
    ll n, k;
    cin >> n >> k;
    cout << primeFactor(n, k) << endl;
    return 0;
}