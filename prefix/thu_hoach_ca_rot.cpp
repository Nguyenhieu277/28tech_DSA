#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll prefix[max_n][max_n];
int main(){
    quick();
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int query;
    cin >> query;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
        }
    }
    while(query--){
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] +  prefix[x1 - 1][y1 - 1] << endl;
    }
    return 0;
}