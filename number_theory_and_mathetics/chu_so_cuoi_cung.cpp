#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 4;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll lastDigits(ll n){
    vector<ll> v = {8, 4, 2, 6};
    return v[n % 4];
}
int main(){
    ll n;
    cin >> n;
    cout << lastDigits(n - 1) << endl;
    return 0;
}