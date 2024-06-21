#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int main() {
    quick();
    int n;
    cin >> n;
    priority_queue<ll> pq;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        pq.push(x);
    }
    ll res = 0;
    for(int i = n - 1; i >= 0; i--) { 
        ll top = pq.top();
        pq.pop();
        res += (top * i) % mod;
        res %= mod;
    }
    cout << res << endl;
    return 0;
}
