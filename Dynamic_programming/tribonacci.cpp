#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll F[max_n];
void tribonacci(){
    F[0] = 0;
    F[1] = 0;
    F[2] = 1;
    for(int i = 3; i < max_n; i++){
        F[i] = (F[i - 1] % mod) + (F[i - 2] % mod) + (F[i - 3] % mod);
        F[i] %= mod;
    }
}
int main(){
    quick();
    int t;
    cin >> t;
    tribonacci();
    while(t--){
        int n;
        cin >> n;
        cout << F[n] << endl;
    }
    return 0;
}