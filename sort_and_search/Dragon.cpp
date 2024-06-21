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
    int n, s;
    cin >> n >> s;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    int flag = 0;
    for(auto it : v){
        if(it.first < s){
            s += it.second;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(!flag){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}