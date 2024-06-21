#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    while(n--){
        int x, y;
        cin >> x >> y;
        v.push_back({x, 1});
        v.push_back({y, -1});
    }
    sort(v.begin(), v.end(), cmp);
    int maxCustomer = -1, cnt = 0;
    for(auto it : v){
        cnt += it.second;
        maxCustomer = max(maxCustomer, cnt);
    }
    cout << maxCustomer << endl;
    return 0;
}