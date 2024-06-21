#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool cmp(pair<int, int> a, pair<int, int> b){
    int x = abs(a.first - a.second);
    int y = abs(b.first - b.second);
    if(x < y) return true;
    else if(x == y && a.first < b.first) return true;
    else if(x == y && a.first == b.first && a.second > b.second) return true;
    else return false;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}
