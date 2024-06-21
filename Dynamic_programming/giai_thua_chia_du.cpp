#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1000000
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll f[max_n];
ll n;
void factorial(){
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i <= max_n; i++){
        f[i] = (i % mod) * (f[i - 1] % mod);
        f[i] %= mod;
    }
}

int main(){
    quick();
    int t;
    cin >> t;
    factorial();
    while(t--){
        cin >> n;
        cout << f[n] << endl;
    }
    return 0;
}