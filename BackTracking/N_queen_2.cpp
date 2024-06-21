#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int a[100001], col[100001], row[100001], a1[100001], a2[100001];
int A[101][101];
const int n = 8;
int ans = -1e9;
void backTracking(int sum, int i){
    for(int j = 1; j <= n; j++){
        if(col[j] == 0 && row[j] == 0 && a1[i - j + n] == 0 && a2[i + j - 1] == 0){
            a[i] = j;
            col[j] = 1;
            row[j] = 1;
            a1[i - j + n] = 1;
            a2[i + j - 1] = 1;
            if(i == n){
                ans = max(ans, sum + A[i][j]);
            }
            else{
                backTracking(sum + A[i][j], i + 1);
            }
            col[j] = 0;
            row[j] = 0;
            a1[i - j + n] = 0;
            a2[i + j - 1] = 0;
        }
    }
}
int main(){
    quick();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> A[i][j];
        }
    }
    backTracking(0, 1);
    cout << ans << endl;
    return 0;
}