#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll countingDivisors(ll n){
    ll cnt = 0;
    for(ll i = 1; i <= ceil(sqrt(n)); i++){
        if(n % i == 0){
            cnt++;
            if(i != (n / i) && n % (n / i) == 0){
                cnt++;
            }
        }
    } 
    return cnt;
}
int main(){
    quick();
    ll n;
    cin >> n;
    cout << countingDivisors(n) << endl;
    return 0;
}