#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++){
        auto p = upper_bound(b.begin(), b.end(), a[i]);
        int idx = p - b.begin();
        cout << m - idx << " ";
    }
    cout << endl;
    return 0;
}
