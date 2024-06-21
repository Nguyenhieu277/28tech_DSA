#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n;
    cin >> n;
    for(int y = n / 7; y >= 0; y--){
        int x = (n - y * 7) / 4;
        if(x * 4 + y * 7 == n){
            for(int i = 0; i < x; i++){
                cout << "4";
            }
            for(int i = 0; i < y; i++){
                cout << "7";
            }
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}