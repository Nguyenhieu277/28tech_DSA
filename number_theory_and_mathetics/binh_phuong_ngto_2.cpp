#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isPrettyNumber(int n){
    bool flag = false;
    for(int i = 2; i <= sqrt(n); i++){
        int mu = 0;
        while(n % i == 0){
            n /= i;
            mu++;
        }
        if(mu >= 2) flag = true;
        if(mu == 1) return false;
    }
    if(n != 1) return false;
    return flag;
}
int main(){
    quick();
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(isPrettyNumber(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}