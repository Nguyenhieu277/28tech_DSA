#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

double solve(int n){
    if(n == 1){
        return 1;
    }
    else return 1.0 / n + solve(n - 1);
}
int main(){
    quick();
    int n;
    cin >> n;
    cout << fixed << setprecision(3) << solve(n) << endl;
    return 0;
}