#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, pair<int, int>> piii;
const int mod = 1000000007;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
int a[max_n][max_n];
vector<piii> List[max_n];
int d[max_n][max_n];
void input(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            d[i][j] = INT_MAX;
        }
    }
}
void Dijkstra(int u, int v){
    d[u][v] = a[u][v];
    priority_queue<piii, vector<piii>, greater<piii>> q;
    q.push({a[u][v], {u, v}});
    while(!q.empty()){
        piii k = q.top();
        q.pop();
        int x = k.second.first, y = k.second.second, w = k.first;
        if(w > d[x][y]) continue;
        d[x][y] = w;
        for(int i = 0; i < 4; i++){
            int xi = x + dx[i];
            int yi = y + dy[i];
            if(xi >= 1 && xi <= n && yi >= 1 && yi <= m){
                if(d[xi][yi] > d[x][y] + a[xi][yi]){
                    d[xi][yi] = d[x][y] + a[xi][yi];
                    q.push({d[xi][yi], {xi, yi}});
                }
            }
        }
    }
    cout << d[n][m] << endl;
}
int main(){
    Quick();
    input();
    Dijkstra(1, 1);
    return 0;
}