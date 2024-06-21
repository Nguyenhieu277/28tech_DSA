#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<ll> prime(10000001, 0);
bool lastDigitsMaximum(ll n){
    int tmp = n % 10;
    int maximum = -1e9;
    while(n != 0){
        int m = n % 10;
        if(maximum < m){
            maximum = m;
        }
        n /= 10;
    }
    return tmp == maximum;
}
void sieve(ll n){
    prime[0] = prime[1] = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(!prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
    ll cnt = 0;
    for(ll i = 2; i <= n; i++){
        if(!prime[i] && lastDigitsMaximum(i)){
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl;
    cout << cnt;
    cout << endl;
}
int main(){
    quick();
    ll n;
    cin >> n;
    sieve(n);
    return 0;
}
