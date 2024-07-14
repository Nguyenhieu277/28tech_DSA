#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m, timer = 0;
vector<int> List[max_n];
int low[max_n], disc[max_n];
int visited[max_n], AP[max_n];
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
}
void Tarjan(int u, int par){
    visited[u] = 1;
    low[u] = disc[u] = ++timer;
    int child = 0;
    for(int v : List[u]){
        if(v == par) continue;
        if(!visited[v]){
            Tarjan(v, u);
            ++child;
            low[u] = min(low[u], low[v]);
            if(par != -1 && low[v] >= disc[u]){
                AP[u] = 1;
            }
        }
        else{
            low[u] = min(low[u], disc[v]);
        }
    }
    if(par == -1 && child > 1) AP[u] = 1;
}
int main(){
    Quick();
    input();
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            Tarjan(i, -1);
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(AP[i]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}