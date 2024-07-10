#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m, scc = 0, timer = 0;
vector<int> List[max_n];
int visited[max_n], inStack[max_n];
vector<pii> brigde;
int low[max_n], disc[max_n];
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
    memset(visited, 0, sizeof(visited));
}
void Tarjan(int u, int par){
    visited[u] = 1;
    disc[u] = low[u] = ++timer;
    for(int v : List[u]){
        if(v == par) continue;
        if(!visited[v]){
            Tarjan(v, u);
            low[u] = min(low[u], low[v]);
            if(low[v] > disc[u]){
                brigde.push_back({u, v});
            }
        }
        else{
            low[u] = min(low[u], disc[v]);
        }
    }
}
int main(){
    Quick();
    input();
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            Tarjan(i, -1);
        }
    }
    cout << brigde.size() << endl;
    return 0;
}