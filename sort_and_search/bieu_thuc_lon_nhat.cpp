#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    ll sum = v[0];
    sort(v.begin() + 1, v.end());
    for(int i = n - 1; i > n - k - 1; i--){
        sum += v[i];
    }
    for(int i = 1; i <= n - k - 1; i++){
        sum -= v[i];
    }
    cout << sum << endl;
    return 0;
}