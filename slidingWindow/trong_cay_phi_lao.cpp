#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void slidingWindow(ll a[], ll n, ll k){
    ll minmove = 1e9, alive = 0;
    for(int i = 0; i < k; i++){
        alive += a[i];
    }
    for(int i = k; i < n; i++){
        minmove = min(minmove, k - alive);
        alive = alive + a[i] - a[i - k];
    }
    if(minmove == 1e9){
        cout << -1 << endl;
    }
    else{
        cout << minmove << endl;
    }
}
int main(){
    quick();
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll &i : a){
        cin >> i;
    }
    slidingWindow(a, n, k);
    return 0;
}
