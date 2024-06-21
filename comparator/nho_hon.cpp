#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/

int binary_search(vector<int> &v, int x){
    int r = v.size() - 1, l = 0;
    int res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(v[m] < x){
            res = m; 
            l = m + 1;
        }
        else r = m - 1;
    }
    return res + 1;
}   
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
        int count = binary_search(b, a[i]);
        cout << count << " ";
    }
    cout << endl;
    return 0;
}
