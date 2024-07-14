#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
vector<int> List[max_n];
int color[max_n];
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
    memset(color, -1, sizeof(color));
}
bool BFS(int u){
    queue<int> q;
    q.push(u);
    color[u] = 0;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int v : List[x]){
            if(color[v] == -1){
                color[v] = 1 - color[x];
                q.push(v);
            }
            else if(color[v] == color[x]){
                return false;
            }
        }
    }
    return true;
}
bool DFS(int u, int par){
    color[u] = 1 - color[par];
    for(int v : List[u]){
        if(color[v] == -1){
            if(!DFS(v, u)) return false;
        }
        else if(color[v] == color[u]) return false;
    }
    return true;
}
int main(){
    Quick();
    input();
    int flag = 0;
    color[0] = 1;
    for(int i = 1; i <= n; i++){
        if(color[i] == -1){
            if(!DFS(i, 0)){ // !BFS(i)
                flag = 1;
                break;
            }
        }
    }
    if(!flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}