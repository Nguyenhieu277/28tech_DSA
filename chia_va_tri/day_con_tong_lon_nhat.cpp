#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll kadaneAlgorithm(int n, int a[]){
    ll max_so_far = LLONG_MIN, max_ending_here = 0;
    for(int i = 0; i < n; i++){
        max_ending_here += a[i];
        if(max_ending_here > max_so_far){
            max_so_far = max_ending_here;
        }
        if(max_ending_here < 0){
            max_ending_here = 0;
        }
    }
    return max_so_far;
}
int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << kadaneAlgorithm(n, a) << endl;
    return 0;
}