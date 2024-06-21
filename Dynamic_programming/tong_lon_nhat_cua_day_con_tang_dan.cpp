#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


void DynamicAlgorithm(vector<int> &v, int n){
    vector<int> dp(n + 1);
    int res = INT_MIN;
    for(int i = 0; i < n; i++){
        dp[i] = v[i];
        for(int j = 0; j < i; j++){
            if(v[i] > v[j]){
                dp[i] = max(dp[i], dp[j] + v[i]);
            }
        }
        res = max(res, dp[i]);
    }
    // for(int i = 0; i < n; i++){
    //     cout << dp[i] << " ";
    // }
    // cout << endl;
    cout << res << endl;
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
    DynamicAlgorithm(v, n);
    return 0;
}