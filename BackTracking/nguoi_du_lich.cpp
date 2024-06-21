#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, a[max_n][max_n], ans = INT_MAX;
int mark[max_n] = {0}, x[max_n];
int minProfit = INT_MAX;
void init(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            minProfit = min(minProfit, a[i][j]);
        }
    }
}
void backTracking(int idx, int profit){
    for(int i = 1; i <= n; i++){
        if(!mark[i]){
            x[idx] = i;
            mark[i] = 1;
            int before = x[idx - 1], now = x[idx];
            profit += a[before][now];
            if(idx == n){
                ans = min(ans, profit + a[1][x[idx]]);
            }
            else if(profit + (n - idx + 1) * minProfit < ans){
                backTracking(idx + 1, profit);
            }
            profit -= a[before][now];
            mark[i] = 0;
        }
    }
}
int main(){
    quick();
    cin >> n;
    init();
    x[1] = 1;
    mark[1] = 1;
    backTracking(2, 0);
    cout << ans << endl;
    return 0;
}