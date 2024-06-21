#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool check(int n){
    int mu = 0, cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            while(n % i == 0){
                mu++;
                n /= i;
            }
        }
    }
    if(n != 1){
        cnt++;
        mu++;
    }
    return cnt >= 3 || (cnt == 2 && mu >= 4) || (cnt == 1 && mu >= 6);
}
int main(){
    quick();
    int n;
    cin >> n;
    if(check(n)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}