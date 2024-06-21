#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll solve(ll n){
    if(n & 1){
        return (n + 1) / 2 * (-1); 
    }
    else return n / 2;
}
int main(){
    quick();
    ll n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}