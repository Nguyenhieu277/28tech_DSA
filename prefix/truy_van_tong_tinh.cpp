#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<ll> prefix(max_n);
void prefixSum(vector<int> &v, int n){
    prefix[0] = v[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + v[i];
    } 
}
int main(){
    quick();
    int n, query;
    cin >> n >> query;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    prefixSum(v, n);
    while(query--){
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - (l == 0 ? 0 : prefix[l - 1]) << endl;
    }
    return 0;
}