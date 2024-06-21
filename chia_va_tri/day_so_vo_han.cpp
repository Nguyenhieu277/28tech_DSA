#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

struct Matrix{
    ll a[3][3];
    friend Matrix operator * (Matrix x, Matrix y){
        Matrix res;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                res.a[i][j] = 0;
                for(int k = 0; k < 2; k++){
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
    int n;
    cin >> n;
    Matrix x;
    x.a[0][0] = 1;
    x.a[0][1] = 1;
    x.a[1][0] = 1;
    x.a[1][1] = 0;
    Matrix res = binPow(x, n);
    cout << res.a[0][1] << endl;
    return 0;
}