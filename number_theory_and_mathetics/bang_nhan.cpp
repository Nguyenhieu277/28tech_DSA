#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll divisorsPrime(int n, int x){
    ll cnt = 0;
    for(int i = 1; i <= n; i++){
        if(x % i == 0 && x / i <= n){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    quick();
    int n;
    int x;
    cin >> n >> x;
    cout << divisorsPrime(n, x) << endl;
    return 0;
}