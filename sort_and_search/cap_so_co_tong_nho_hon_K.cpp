#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll countPairsWithSum(vector<int> &v, int n, int k){
    sort(v.begin(), v.end());
    ll cnt = 0;
    for(int i = 0; i < n - 1; i++){
        int target = k - v[i];
        auto left = lower_bound(v.begin() + i + 1, v.end(), target);
        left--;
        int pos = left - v.begin();
        cnt += pos - i;
    }
    return cnt;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    cout << countPairsWithSum(v, n, k) << endl;
    return 0;
}