#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, query;
    cin >> n >> query;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    vector<int> delta(n + 1, 0);
    while(query--){
        int l, r, k;
        cin >> l >> r >> k;
        delta[l] += k;
        if(r + 1 < n){
            delta[r + 1] -= k;
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += delta[i];
        v[i] += ans;
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}