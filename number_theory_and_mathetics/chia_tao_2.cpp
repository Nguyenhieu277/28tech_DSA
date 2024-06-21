#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void composed(ll n, ll k){
    ll a[max_n][max_n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(i == j || j == 0){
                a[i][j] = 1;
            }
            else{
                a[i][j] = (a[i - 1][j - 1]) + (a[i - 1][j]);
            }
        }
    }
    cout << a[n - 1][k - 1] << endl;
}
//bai toan chia keo: voi m keo khac nhau chia cho n dua tre (khong nhat thiet dua tre nao cung co) => (n + m - 1)C(n - 1)
int main(){
    quick();
    ll n, m;
    cin >> n >> m;
    composed(m + n, n);
    return 0;
}