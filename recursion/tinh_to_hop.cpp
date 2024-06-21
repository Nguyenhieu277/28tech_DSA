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
ll Ckn(int n, int k){
    if(k == 0 || n == k){
        return 1;
    }
    else return (factorial(n)) / (factorial(k) * factorial(n - k));
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    cout << Ckn(n, k);
    return 0;
}