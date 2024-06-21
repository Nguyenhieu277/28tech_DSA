#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, m;
    cin >> n >> m;
    multiset<int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    vector<int> v;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    for(int it : v){
        auto tmp = se.upper_bound(it);
        if(tmp != se.begin()){
            --tmp;
            cout << *tmp << endl;
            se.erase(tmp);
        }
        else cout << -1 << endl;
    }
    return 0;
}