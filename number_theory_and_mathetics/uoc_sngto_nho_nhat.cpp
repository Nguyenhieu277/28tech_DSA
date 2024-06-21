#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> prime(100001, 0);
void sieve(){
    for(int i = 1; i <= 100001; i++){
        prime[i] = i;
    }
    for(int i = 2; i <= sqrt(100001); i++){
        if(prime[i] == i){
            for(int j = i * i; j <= 100001; j += i){
                if(prime[j] == j){
                    prime[j] = i;
                }
            }
        }
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    sieve();
    for(int i = 1; i <= n; i++){
        cout << prime[i] << endl;
    }
    return 0;
}
