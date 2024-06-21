#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void slidingWindow(int a[], int n, int k){
    multiset<int> se;
    for(int i = 0; i < k; i++){
        se.insert(a[i]);
    }
    auto demian = next(se.begin(), (k - 1) / 2);
    for(int i = k; i <= n; i++){
        cout << *demian << " ";
        se.insert(a[i]);
        if(i == n) break;
        if(a[i] < *demian) --demian;
        if(a[i - k] <= *demian) ++demian;
        se.erase(se.lower_bound(a[i - k]));
    }
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