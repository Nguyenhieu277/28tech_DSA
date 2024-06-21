#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll EulerFunction(ll n){
    ll res = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            res = res - res / i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1) res -= res / n;
    return res;
}
int main(){
    quick();
    ll n;
    cin >> n;
    cout << EulerFunction(n) << endl;
    return 0;
}