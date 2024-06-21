#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll factorial(int n){
    vector<ll> f(n + 1);
    f[0] = f[1] = 1;
    for(int i = 2; i <= n; i++){
        f[i] = i * f[i - 1];
    }
    return f[n];
}
ll Ckn(int n, int k){
    return factorial(n) / (factorial(n - k) * factorial(k));
}
void arrangeFruits(int n, int k1, int k2, int k3, int k4){
    if(k1 + k2 + k3 + k4 > n || k1 + k2 + k3 + k4 < n){
        return;
    }
    else{
        ll res = 1;
        res *= Ckn(n, k1);
        res *= Ckn(n - k1, k2);
        res *= Ckn(n - k1 - k2, k3);
        res *= Ckn(n - k1 - k2 - k3, k4);
        cout << res << endl;
    }
}
int main(){
    quick();
    int n, k1, k2, k3, k4;
    cin >> n;
    cin >> k1 >> k2 >> k3 >> k4;
    arrangeFruits(n, k1, k2, k3, k4);
    return 0;
}