#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll prime[max_n];
ll countPrime[max_n];
void sieve(){
    prime[0] = prime[1] = 1;
    for(int i = 2; i <= sqrt(max_n); i++){
        if(!prime[i]){
            for(int j = i * i; j <= max_n; j += i){
                prime[j] = 1;
            }
        }
    }
    countPrime[0] = countPrime[1] = 0;
    countPrime[2] = 2;
     for (int i = 3; i <= max_n; i++) {
        if(!prime[i]){
            countPrime[i] = (countPrime[i - 1] % mod) * (i % mod); 
            countPrime[i] %= mod;
        }
        else{
            countPrime[i] = countPrime[i - 1];
        }
    }
    
} 
int main(){
    quick();
    sieve();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << countPrime[n] << endl;
    }
    return 0;
}