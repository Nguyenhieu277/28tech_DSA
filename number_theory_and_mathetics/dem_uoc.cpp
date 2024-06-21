#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/
void countingFactorization(vector<ll> &v){
    ll res = 1;
    for(int i = 0; i < v.size(); i++){
        res *= (v[i] % mod + 1);
        res %= mod;
    }
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    vector<ll> v;
    for(int test = 0; test < t; test++){
        ll p, e;
        cin >> p >> e;
        v.push_back(e);
    }
    countingFactorization(v);
    return 0;
}
