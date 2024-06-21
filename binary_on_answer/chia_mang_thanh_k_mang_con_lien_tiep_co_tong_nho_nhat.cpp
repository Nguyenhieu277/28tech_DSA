#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool check(vector<int> &v, int k, ll sum){
    ll ans = 0;
    int cnt = 0;
    for(int i = 0; i< v.size(); i++){
        ans += v[i];
        if(ans > sum){
            cnt++;
            ans = v[i];
        }
    }
    cnt++;
    return cnt <= k;
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
    ll left = *max_element(v.begin(), v.end()), right = accumulate(v.begin(), v.end(), (ll)0);
    ll res = -1;
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(v, k, mid)){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << res << endl;
    return 0;
}