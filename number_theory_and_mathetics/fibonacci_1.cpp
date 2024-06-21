#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll Fibonacci(int n){
    vector<ll> fibo(n + 1);
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i <= n; i++){
        fibo[i] = (fibo[i - 1] % mod) + (fibo[i - 2] % mod);
        fibo[i] %= mod;
    }
    return fibo[n - 1];
}
int main(){
    quick();
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}