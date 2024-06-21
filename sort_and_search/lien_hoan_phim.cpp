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
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    int maxFilm = -1, tmp = v[0].second, cnt = 1;
    for(int i = 1; i < v.size(); i++){
        if(tmp <= v[i].first){
            tmp = v[i].second;
            cnt++;
        }
        else tmp = min(tmp, v[i].second);
        maxFilm = max(maxFilm, cnt);
    }
    cout << maxFilm << endl;
    return 0;
}