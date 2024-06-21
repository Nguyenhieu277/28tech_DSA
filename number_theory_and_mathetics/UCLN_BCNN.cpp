#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll gcd(ll a, ll b){
    while(b != 0){
        ll tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}
int main(){
    ll a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
    return 0;
}