#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
bool isThreeSum(vector<ll> &v, int k){
    for(int i = 0; i < v.size() - 2; i++){
        int left = i + 1;
        int right = v.size() - 1;
        while(left < right){
            if(v[i] + v[left] + v[right] == k){
            return true;
            }
            else if(v[i] + v[left] + v[right] < k){
                left++;
            }
            else right--;
        }
    }
    return false;
}

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if(isThreeSum(v, k)){
        cout << "YES" << endl;
        return 0;
    }
    else cout << "NO" << endl;
    return 0;
}
