#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n;
    cin >> n;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back(x);
    }
    priority_queue<ll> pq;
    for(ll it : v){
        pq.push(it);
    }
    ll total = 0;
    while(pq.size() > 1){
        ll tmp1 = pq.top();
        pq.pop();
        ll tmp2 = pq.top();
        pq.pop();
        ll sum = (tmp1 + tmp2);
        ll length = sum % mod;
        total = (total + length) % mod;
        pq.push(sum);
    }
    cout << total << endl;
    return 0;
}