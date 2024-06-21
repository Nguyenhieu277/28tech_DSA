#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isLuFoNumber(ll n){
    while(n != 0){
        int m = n % 10;
        if(m != 0 && m != 6 && m != 8){
            return false;
        }
        n /= 10;
    }
    return true;
}
int main(){
    quick();
    ll n;
    cin >> n;
    if(isLuFoNumber(n)){
        cout << 1 << endl;
    }
    else cout << 0 << endl;
    return 0;
}