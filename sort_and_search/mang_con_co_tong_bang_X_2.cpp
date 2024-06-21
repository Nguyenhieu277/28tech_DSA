#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void prefixSum(vector<ll> &v, ll k){
    vector<ll> prefix(v.size() + 1, 0);
    map<ll, ll> mp;
    ll cnt = 0;
    for(int i = 1; i <= v.size(); i++){
        prefix[i] = prefix[i - 1] + v[i - 1];
    }
    for(int i = 0; i <= v.size(); i++){
        ll target = prefix[i] - k;
        cnt += mp[target];
        mp[prefix[i]]++;
    }
    cout << cnt << endl;
}
int main(){
    quick();
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back(x);
    }
    prefixSum(v, k);
    return 0;
}