#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool F(int a[], int n, int l, ll height){
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > height)
            ans += a[i] - height;
    }
    return ans >= height;
}
int main(){
    int n, l;
    cin >> n >> l;
    int a[n];
    int maxVal = -1e9;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxVal = max(maxVal, a[i]);
    }
    int left = 0, right = maxVal;
    ll res = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(F(a, n, l, mid)){
            left = mid + 1;
            res = mid;
        }
        else right = mid - 1;
    }
    cout << res << endl;
    return 0;
}