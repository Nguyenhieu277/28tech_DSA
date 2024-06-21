#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 11
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

struct Matrix{
    ll a[max_n][max_n];
    int n;
    friend Matrix operator * (Matrix x, Matrix y){
        Matrix res;
        res.n = x.n;
        for(int i = 0; i < x.n; i++){
            for(int j = 0; j < x.n; j++){
                res.a[i][j] = 0;
                for(int k = 0; k < x.n; k++){
                    res.a[i][j] += x.a[i][k] * y.a[k][j];
                    res.a[i][j] %= mod;
                }
            }
        }
        return res;
    };
};
Matrix binPow(Matrix a, int n){
    if(n == 1){
        return a;
    }
    Matrix x = binPow(a, n / 2);
    if(n % 2 == 1){
        return x * x * a;
    }
    else return x * x;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    Matrix x;
    x.n = n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x.a[i][j];
        }
    }
    Matrix res = binPow(x, k);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += (res.a[i][n - 1]) % mod;
        sum %= mod;
    }
    cout << sum << endl;
    return 0;
}