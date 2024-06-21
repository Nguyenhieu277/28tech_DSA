#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool cmp1(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second > b.second;
    else return a < b;
}
bool cmp2(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}
void insert(vector<pair<int, int>> &v, int x){
    for(auto &it : v){
        if(it.first == x){
            it.second++;
            return;
        }
    }
    v.push_back({x, 1});
}
int main(){
    quick();
    int n;
    cin >> n;
    map<int, int> mp;
    vector<pair<int, int>> v1, v2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
        insert(v2, x);
    }
    for(auto it : mp){
        v1.push_back({it.first, it.second});
    }
    sort(v1.begin(), v1.end(), cmp1);
    stable_sort(v2.begin(), v2.end(), cmp2);
    for(auto it : v1){
        while(it.second--){
            cout << it.first << " ";
        }
    }
    cout << endl;
    for(auto it : v2){
        while(it.second--){
            cout << it.first << " ";
        }
    }
    cout << endl;
    return 0;
}