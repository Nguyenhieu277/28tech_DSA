#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void solve(ll a, ll b){
    if(a == 0 || b == 0) return;
    if(b % a == 0){
        cout << 1 << "/" << (b / a) << " ";
        return;
    }
    ll x = (b / a) + 1;
    cout << 1 << "/" << x << " + ";
    solve(a * x - b, b * x);
}

int main(){
    quick();
    ll a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}