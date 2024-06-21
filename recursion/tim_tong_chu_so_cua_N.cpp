#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll sumOfDigits(ll n){
    if(n < 10){
        return n;
    }
    else return n % 10 + sumOfDigits(n / 10);
}
int main(){
    quick();
    ll n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
    return 0;
}