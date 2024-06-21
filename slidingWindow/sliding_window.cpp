#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/
void slidingWindow(int a[], int n, int k){
    ll sum = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    ll res = sum, idx = 0;
    for(int i = k; i < n; i++){
        sum = sum - a[i - k] + a[i];
        if(sum > res){
            res = sum;
            idx = i - k + 1;
        }
    }
    cout << res << endl;
    for(int i = 0; i < k; i++){
        cout << a[idx + i] << " ";
    }
    cout << endl;
}

int main(){
    quick();
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    slidingWindow(a, n, k);
    return 0;
}