#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <vector<int>> vv;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, s, t, u, v;
int a[max_n][max_n];
int visited[max_n][max_n], d[max_n][max_n];
void input(){
    cin >> n;
    cin >> s >> t >> u >> v;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}
int BFS(int x, int y){
    queue<pii> q;
    q.push({x, y});
    visited[x][y] = 1;
    while(!q.empty()){
        pii k = q.front();
        q.pop();
        int k1 = k.first, k2 = k.second;
        if(k1 == u && k2 == v) return d[u][v];
        for(int i = 0; i < 8; i++){
            int x1 = k1 + dx[i];
            int y1 = k2 + dy[i];
            if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= n && a[x1][y1] == 1 && !visited[x1][y1]){
                q.push({x1, y1});
                visited[x1][y1] = 1;
                d[x1][y1] = d[k1][k2] + 1;
            }
        }
    }
    return -1;
}
int main(){
    Quick();
    input();
    cout << BFS(s, t) << endl;
    return 0;
}