#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m, s;
vector<int> List[max_n];
int visited[max_n];
vector<pair<int, int>> edge;
void input(){
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(List[i].begin(), List[i].end());
    }
}
void DFS(int u){
    visited[u] = 1;
    for(int v : List[u]){
        if(!visited[v]){
            edge.push_back({u, v});
            DFS(v);
        }
    }
}
int main(){
    Quick();
    input();
    DFS(s);
    for(auto it : edge){
        cout << it.first << "->" << it.second << endl;
    }
    return 0;
}