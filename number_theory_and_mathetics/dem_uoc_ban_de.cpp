#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void factorize(int n, map<int, int> &mp){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
                mp[i]++;
            }
        }
    }
    if(n > 1) mp[n]++;
}
int main(){
    quick();
    int n;
    cin >> n;
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
