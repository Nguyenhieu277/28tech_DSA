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
    priority_queue<ll> pq1, pq2;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        pq1.push(x);
    }
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        pq2.push(x);
    }
    ll sum = 0;
    for(int i = 0; i < n; i++){
        ll top1 = pq1.top();
        pq1.pop();
        ll top2 = pq2.top();
        pq2.pop();
        ll total = top1 * top2;
        sum += total;
    }
    cout << sum << endl;
    return 0;
}