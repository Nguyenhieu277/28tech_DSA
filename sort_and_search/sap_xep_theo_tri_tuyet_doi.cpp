#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool cmp(int a, int b){
    return abs(a) < abs(b);
}
int main(){
    quick();
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(int it : v) cout << it << " ";
    cout << endl;
    return 0;
}
