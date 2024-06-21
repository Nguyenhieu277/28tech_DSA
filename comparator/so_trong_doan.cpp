#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int query;
    cin >> query;
    sort(v.begin(), v.end());
    while(query--){
        int l, r;
        cin >> l >> r;
        auto p = lower_bound(v.begin(), v.end(), l);
        auto q = upper_bound(v.begin(), v.end(), r);
        q--;
        cout << q - p + 1 << endl;
    }
    return 0;
}
