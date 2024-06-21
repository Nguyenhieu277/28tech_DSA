#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void LIS(vector<int> &v, int n){
    vector<int> dp(n, 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(v[i] > v[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << n - *max_element(dp.begin(), dp.end()) << endl;
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
    LIS(v, n);
    return 0;
}