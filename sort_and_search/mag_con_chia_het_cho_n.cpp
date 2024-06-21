#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void prefixSum(vector<int> &v, int n){
    map<ll, ll> mp;
    ll sum = 0, cnt = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
        if(sum % n == 0){
            cnt++;
        }
        if(mp.count((sum % n + n) % n)){
            cnt += mp[(sum % n + n) % n];
        }
        mp[(sum % n + n) % n]++;
    }
    cout << cnt << endl;
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    prefixSum(v, n);
    return 0;
}