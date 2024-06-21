#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll mark[1000001];
int main(){
    quick();
    int n;
    cin >> n;
    ll gcdMax = -1e9;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        mark[x]++;
        gcdMax = max(gcdMax, x);
    }
    for(int i = gcdMax; i > 0; i--){
        ll cnt = 0;
        for(int j = i; j <= gcdMax; j += i){
            cnt += mark[j];
        }
        if(cnt >= 2){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}