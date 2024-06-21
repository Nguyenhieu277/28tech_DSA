#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
    if(a.first < b.first) return true;
    else if(a.first == b.first && a.second.first < b.second.first){
        return true;
    }
    else if(a.first == b.first && a.second.first == b.second.first && a.second.second < b.second.second){
        return true;
    }
    else return false;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, pair<int, int>>> v;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        v.push_back({x, {y, z}});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }
    return 0;
}
