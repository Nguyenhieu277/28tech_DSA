#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void Dp(vector<int> &v, int n){
    int s = accumulate(v.begin(), v.end(), 0);
    vector<int> dp(s + 1, 0);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = s; j >= v[i]; j--){
            if(dp[j - v[i]] == 1){
                dp[j] = 1;
            }
        }
    }
    for(int i = 0; i <= s; i++){
        if(dp[i]){
            cout << i << " ";
        }
    }
    cout << endl;
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
    Dp(v, n);
    return 0;
}