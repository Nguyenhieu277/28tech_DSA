#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isPrime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

void listOfPrimeDigits(ll n){
    vector<ll> v;
    map<ll, ll> mp;
    while(n != 0){
        int m = n % 10;
        if(isPrime(m)){
            mp[m]++;
            v.push_back(m);
        }
        n /= 10;
    }
    reverse(v.begin(), v.end());
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for(auto it : v){
        if(mp[it] > 0){
            cout << it << " " << mp[it] << endl;
            mp[it] = 0;
        }
    }
    cout << endl;
}
int main(){
    quick();
    ll n;
    cin >> n;
    listOfPrimeDigits(n);
    return 0;
}