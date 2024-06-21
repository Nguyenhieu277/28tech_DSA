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
    int res = 1;
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++){
        if(v[i] - v[i - 1] > k){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}