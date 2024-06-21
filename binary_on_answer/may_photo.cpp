#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool F(int n, int x, int y, ll time){
    time -= min(x, y);
    return time / x + time / y >= n - 1; 
}
int main(){
    quick();
    int n, x, y;
    cin >> n >> x >> y;
    ll left = 0, right = n * max(x, y);
    ll res = 0;
    while(left <= right){
        ll mid = (left + right) / 2;
        if(F(n, x, y, mid)){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << res << endl;
    return 0;
}