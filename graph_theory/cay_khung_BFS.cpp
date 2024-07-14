#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> List[max_n];
int n, m, s;
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
void BFS(int u){
    visited[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int v : List[x]){
            if(!visited[v]){
                q.push(v);
                edge.push_back({x, v});
                visited[v] = 1;
            }
        }
    }
}
int main(){
    Quick();
    input();
    BFS(s);
    for(auto it : edge){
        cout << it.first << "->" << it.second << endl;
    }
    return 0;
}