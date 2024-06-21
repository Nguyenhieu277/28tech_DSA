#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void composed(int n, int k){
    int a[max_n][max_n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(i == j || j == 0){
                a[i][j] = 1;
            }
            else{
                a[i][j] = (a[i - 1][j - 1] % mod) + (a[i - 1][j] % mod);
                a[i][j] %= mod;
            }
        }
    }
    cout << a[n - 1][k - 1] << endl;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    composed(n, k);
    return 0;
}