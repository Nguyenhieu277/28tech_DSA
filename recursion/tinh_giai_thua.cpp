#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else return n * factorial(n - 1);
}
int main(){
    quick();
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}