#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    auto it = upper_bound(v.begin(), v.end(), k);
    if(it == v.end()){
        cout << -1 << endl;
    }
    else{
        cout << it - v.begin()  - 1<< endl;
    }
    return 0;
}
