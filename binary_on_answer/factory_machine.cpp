#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool F(vector<int> &v, int k, ll ans){
    ll sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += ans / v[i];
        if(sum >= k){
            return true;
        }
    }
    return false;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int max_ele = -1;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
        max_ele = max(max_ele, x);
    }
    ll left = 1, right = (ll)k * max_ele;
    ll ans = -1;
    while(left <= right){
        ll mid = (left + right) / 2;
        if(F(v, k, mid)){
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << ans << endl;
    return 0;
}