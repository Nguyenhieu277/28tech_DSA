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
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end(), cmp);
    int round = 1;
    for(int i = 0; i < n - 1; i++){
        if(v[i].second > v[i + 1].second){
            round++;
        }
    }
    cout << round << endl;
    return 0;
}