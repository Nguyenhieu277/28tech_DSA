#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isPalimdromic(ll n){
    ll m = 0, tmp = n;
    while(n != 0){
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m == tmp;
}
bool isLuFoNumber(ll n){
    ll sum = 0, tmp = n;
    int flag = 0;
    while(n != 0){
        int m = n % 10;
        if(m == 6){
            flag = 1;
        }
        sum += m;
        n /= 10;
    }
    return flag == 1 && sum % 10 == 8 && isPalimdromic(tmp);
}
int main(){
    quick();
    ll a, b;
    cin >> a >> b;
    for(ll i = a; i <= b; i++){
        if(isLuFoNumber(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}