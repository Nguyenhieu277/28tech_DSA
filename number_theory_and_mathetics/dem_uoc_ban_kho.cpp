#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> f(max_n);
void sieve(){
    for(int i = 1; i <= max_n; i++){
        f[i] = i;
    }
    for(int i = 2; i <= sqrt(max_n); i++){
        if(f[i] == i){
            for(int j = i * i; j <= max_n; j += i){
                if(f[j] == j) f[j] = i;
            }
        }
    }
}
void factorize(int n, map<int, int> &mp){
    while(n != 1){
        int tmp = f[n];
        mp[tmp]++;
        n /= tmp;
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    sieve();
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        factorize(x, mp);
    }
    ll res = 1;
    for(auto it : mp){
        res *= it.second + 1;
        res %= mod;
    }
    cout << res << endl;
    return 0;
}