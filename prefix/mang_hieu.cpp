#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 100001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll prefix[max_n];
void prefixDifference(vector<int> &v, int n){
    prefix[0] = v[0];
    for(int i = 1; i < n; i++){
        prefix[i] = v[i] - v[i - 1];
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    prefixDifference(v, n);
    for(int i = 0; i < n; i++){
        cout << prefix[i] << " ";
    }
    cout << endl;
    return 0;
}