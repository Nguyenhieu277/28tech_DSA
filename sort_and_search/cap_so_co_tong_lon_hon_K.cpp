#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for(int i = 0; i < n - 1; i++){
        int target = k - v[i];
        auto it = upper_bound(v.begin() + i + 1, v.end(), target);
        ans += distance(it, v.end());
    }
    cout << ans << endl;
    return 0;
}