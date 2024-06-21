#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

string convert(ll n){
    char hex[] = "0123456789ABCDEF";
    if(n < 16){
        return string(1, hex[n]);
    }
    else return convert(n / 16) + hex[n % 16];
}
int main(){
    quick();
    ll n;
    cin >> n;
    cout << convert(n) << endl;
    return 0;
}