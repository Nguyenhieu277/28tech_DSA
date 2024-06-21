#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

string convert(ll n){
    if(n == 0){
        return "0";
    }
    if(n == 1){
        return "1";
    }
    return convert(n / 2) + ((n % 2 == 0) ? "0" : "1");
}
int main(){
    quick();
    ll n;
    cin >> n;
    string res = convert(n);
    while(res[0] == '0' && res.size() > 1){
        res.erase(0, 1);
    }
    cout << res;
    return 0;
}