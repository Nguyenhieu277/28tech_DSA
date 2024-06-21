#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isPrime(ll n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i <= sqrt(n); i += 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
ll sumOfDigits(ll n){
    ll sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
ll sumOfPrimeFactors(ll n){
    ll sum = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            sum += sumOfDigits(i);
            n /= i;
        }
    }
    if(n > 1) sum += sumOfDigits(n);
    return sum;
}
bool isSmith(ll n){
    return !isPrime(n) && (sumOfDigits(n) == sumOfPrimeFactors(n));
}
int main(){
    ll n;
    cin >> n;
    if(isSmith(n)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}