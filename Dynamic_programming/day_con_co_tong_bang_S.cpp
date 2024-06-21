#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int> dp(s + 1, 0);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = s; j >= v[i]; j--){
            if(dp[j - v[i]] == 1){
                dp[j] = 1;
            }
        }
    }
    if(dp[s]) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}