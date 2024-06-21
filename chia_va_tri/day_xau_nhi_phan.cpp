#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int f[100];
void init(){
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i <= 92; i++){
        f[i] = f[i - 2] + f[i - 1];
    }
}
char findCharacter(int n, ll k){
    if(n == 1) return '0';
    if(n == 2) return '1';
    if(k <= f[n - 2]){
        return findCharacter(n - 2, k);
    }
    else return findCharacter(n - 1, k - f[n - 2]);
}
int main(){
    quick();
    int n;
    ll k;
    cin >> n >> k;
    init();
    cout << findCharacter(n, k) << endl;
    return 0;
}