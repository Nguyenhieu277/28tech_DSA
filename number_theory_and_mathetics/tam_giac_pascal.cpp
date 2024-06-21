#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void pascalTriangle(int a[][max_n], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(i == 0 || i == j || j == 0){
                a[i][j] = 1;
            }
            else{
                a[i][j] = (a[i - 1][j] % mod) + (a[i - 1][j - 1] % mod);
                a[i][j] %= mod;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    int a[max_n][max_n];
    pascalTriangle(a, n);
    return 0;
}