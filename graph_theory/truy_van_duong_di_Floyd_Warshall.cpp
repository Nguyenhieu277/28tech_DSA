#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
int a[max_n][max_n];
void input(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) a[i][j] = 0;
            else a[i][j] = INT_MAX;
        }
    }
    for(int i = 1; i <= m; i++){
        int x, y, w; cin >> x >> y >> w;
        a[x][y] = min(a[x][y], w);
        a[y][x] = min(a[y][x], w);
    }
}

void Floyd_Warshall(){
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][k] < INT_MAX && a[k][j] < INT_MAX)
                    a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
}
int main(){
    Quick();
    input();
    int query;
    cin >> query;
    Floyd_Warshall();
    while(query--){
        int s, t;
        cin >> s >> t;
        if(a[s][t] == INT_MAX){
            cout << -1 << endl;
        }
        else{
            cout << a[s][t] << endl;
        }
    }
    return 0;
}