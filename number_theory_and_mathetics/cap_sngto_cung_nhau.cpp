#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll ucln(ll a, ll b){
    if(a == 0 || b == 0){
        return a;
    }
    else return ucln(b, a % b);
}
int main(){
    quick();
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        for(int j = i + 1; j <= b; j++){
            if(ucln(i, j) == 1){
                cout << "(" << i << "," << j << ")\n";
            }
        }
    }
}
