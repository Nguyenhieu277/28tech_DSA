#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isPalindromic(ll n){
    ll m = 0, tmp = n;
    while(n != 0){
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m == tmp;
}
bool isThreePrimeDivisors(ll n){
    vector<ll> v;
    for(int i = 2; i <= sqrt(n); i++){
        int mu = 0;
        while(n % i == 0){
            n /= i; 
            mu++;
        }
        if(mu >= 1) v.push_back(i);
    }
    if(n > 1) v.push_back(n);
    return v.size() >= 3;
}
bool Check(ll n){
    return isPalindromic(n) && isThreePrimeDivisors(n);
}
int main(){
    quick();
    ll a, b;
    cin >> a >> b;
    int flag = 0;
    for(ll i = a; i <= b; i++){
        if(Check(i)){
            cout << i << " ";
            flag = 1;
        }
    }
    if(!flag) cout << -1 << endl;
    cout << endl;
    return 0;
}
