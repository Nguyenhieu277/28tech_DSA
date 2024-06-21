#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll fibonacci(int n){
    if(n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    quick();
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}