#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 1;
    int tmp = v[0].second;
    for(int i = 1; i < n; i++){
        if(tmp < v[i].first){
            cnt++;
            tmp = v[i].second;
        }
    }
    cout << cnt << endl;
    return 0;
}