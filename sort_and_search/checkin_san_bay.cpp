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
    vector<pair<ll, ll>> v;
    for(int i = 0; i < n; i++){
        ll x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    ll time = v[0].first + v[0].second;
    for(int i = 1; i < n; i++){
        time = max(time, v[i].first);
        time += v[i].second;
    }
    cout << time << endl;
    return 0;
}