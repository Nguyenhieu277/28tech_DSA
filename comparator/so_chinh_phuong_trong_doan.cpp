#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int main(){
    ll a, b;
    cin >> a >> b;
    for(ll i = ceil(sqrt(a)); i <= sqrt(b); i++){
        cout << i * i << " ";
    }
    cout << endl;
    return 0;
}