#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int main(){
    int n;
    cin >> n;
    vector<char> v;
    for(int i = 0; i < n; i++){
        char x; cin >> x;
        v.push_back(x);
    }
    string number = "";
    for(char x : v){
        number += x;
    }
    ll res = 0;
    for(int i = 0; i < number.size(); i++){
        res = (res % mod) * 10 + ((number[i] - '0') % mod);
        res %= mod;
    }
    cout << res << endl;
    return 0;
}