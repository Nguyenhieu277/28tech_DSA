#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> List[max_n];
vector<pair<int, int>> Lis;
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
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1){
                Lis.push_back({i, j});
                List[i].push_back(j);
            }
        }
    }
    for(auto it : Lis){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        cout << i << " : ";
        for(auto it : List[i]){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}