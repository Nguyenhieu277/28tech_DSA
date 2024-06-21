#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll count = 0;
    for(int i = 0; i < v.size(); i++){
        auto p1 = lower_bound(v.begin() + i + 1, v.end(), v[i] + k);
        auto p2 = upper_bound(v.begin() + i + 1, v.end(), v[i] + k);
        count += p2 - p1;
    }
    cout << count << endl;
    return 0;
}
