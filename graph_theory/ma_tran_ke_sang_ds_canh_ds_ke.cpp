#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n; 
    cin >> n;
    int a[n + 1][n + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> v(n + 5);
    vector<pair<int, int>> v1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1 && i < j){
                v1.push_back({j, i});
            }
            if(a[i][j]) v[i].push_back(j);
        }
    }
    sort(v1.begin(), v1.end());
    for(auto it : v1){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        cout << i << " : ";
        for(int it : v[i]){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}