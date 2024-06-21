#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isSquareNumber(ll n){
    ll x = sqrt(n);
    return x * x == n;
}
int main(){
    quick();
    ll n;
    cin >> n;
    if(isSquareNumber(n)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}