#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 10000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
int prime[mod];
void sieve(int n){
    prime[0] = prime[1] = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(!prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
    for(int i = 0; i <= n; i++){
        if(!prime[i]){
            cout << i << " ";
        }
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    sieve(n);
    return 0;
}
