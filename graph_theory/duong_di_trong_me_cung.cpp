#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, s, t, u, v;
int visited[max_n][max_n];
int d[max_n][max_n], a[max_n][max_n];
int BFS(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = 1;
    d[x][y] = 0;
    while(!q.empty()){
        pair<int, int> k = q.front(); 
        q.pop();
        int x = k.first, y = k.second;
        if(x == u && y == v) return d[u][v];
        for(int i = 0; i < 8; i++){
            int x1 = x + dx[i];
            int y1 = y + dy[i];
            if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < n && !visited[x1][y1] && a[x1][y1] == 1){
                q.push({x1, y1});
                visited[x1][y1] = 1;
                d[x1][y1] = d[x][y] + 1;
            }
        }
    }
    return -1;
}

int main(){
    quick();
    cin >> n;
    cin >> s >> t >> u >> v;
    s--; t--; u--; v--;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout << BFS(s, t);
    return 0;
}