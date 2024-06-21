#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

struct Matrix{
    int n;
    ll a[15][15];
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
    }
};

Matrix binpow(Matrix x, ll n){
    if(n == 1)
        return x;
    Matrix X = binpow(x, n / 2);
    if(n % 2 == 0){
        return X * X;
    }
    else{
        return X * X * x;
    }
}

int main(){
    quick();
    int n, k;
    cin >> n >> k;
    Matrix mat;
    mat.n = n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat.a[i][j];
        }
    }
    Matrix res = binpow(mat, k);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << res.a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}