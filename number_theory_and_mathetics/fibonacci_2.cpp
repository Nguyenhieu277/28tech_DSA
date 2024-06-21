#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isFibonacci(ll n){
    vector<ll> fibo(100);
    fibo[0] = 0, fibo[1] = 1;
    for(int i = 2; i <= 92; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for(int i = 0; i <= 92; i++){
        if(n == fibo[i]){
            return true;
        }
    }
    return false;
}
int main(){
    quick();
    ll n;
    cin >> n;
    if(isFibonacci(n)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}