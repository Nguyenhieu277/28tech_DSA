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
int arrangeShow(vector<pair<int, int>> &v){
    int cnt = 1;
    int tmp = v[0].second;
    for(int i = 1; i < v.size(); i++){
        if(v[i].first > tmp){
            cnt++;
            tmp = v[i].second;
        }
    }
    return cnt;
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
    cout << arrangeShow(v) << endl;
    return 0;
}