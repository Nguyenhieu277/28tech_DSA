#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
bool isFourSum(vector<ll> &v, ll k){
    for(int i = 0; i < v.size() - 3; i++){
        for(int j = i + 1; j < v.size() - 2; j++){
            int left = j + 1;
            int right = v.size() - 1;
            while(left < right){
                ll sum = v[i] + v[j] + v[left] + v[right];
                if(sum == k) return true;
                else if(sum < k) left++;
                else right--;
            }
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
    if(isFourSum(v, k)){
        cout << "YES" << endl;
        return 0;
    }
    else cout << "NO" << endl;
    return 0;
}
