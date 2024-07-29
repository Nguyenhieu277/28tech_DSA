#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 10001
#define MAX 1000001
const int dx[] = {0, 1};
const int dy[] = {1, 0};
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int a[max_n][max_n];
int visited[max_n][max_n];
int n, m;
struct Cell{
    int x, y, step;
};
int BFS(int u, int v, int s, int t){
    visited[u][v] = 1;
    queue<Cell> q;
    q.push({u, v, 0});
    while(!q.empty()){
        Cell k = q.front();
        q.pop();
        int k1 = k.x, k2 = k.y, steps = k.step;
        if(k1 == s && k2 == t){
            return steps;
        }
        for(int i = 0; i < 2; i++){
            int xi = k1 + dx[i] * a[k1][k2];
            int yi = k2 + dy[i] * a[k1][k2];
            if(xi >= 1 && xi <= n && yi >= 1 && yi <= m && !visited[xi][yi]){
                q.push({xi, yi, steps + 1});
                visited[xi][yi] = 1;
            }
        }
    }
    return -1;
}
void solve(){
    cin >> n >> m;
    memset(a, 0, sizeof(a));
    memset(visited, 0, sizeof(visited));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    cout << BFS(1, 1, n, m) << endl; 
}
int main(){
    Quick();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}