#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 200001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

struct edge{
    int x, y, w;
};
int n, m;
ll res = 0;
int parent[max_n], sz[max_n];
vector<edge> E;
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y, w; 
        cin >> x >> y >> w;
        E.push_back({x, y, w});
    }
}
void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}
int Find(int u){
    if(u == parent[u]){
        return u;
    }
    else return parent[u] = Find(parent[u]);
}
bool Union(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u == v) return false;
    if(sz[u] < sz[v]){
        swap(u, v);
    }
    sz[u] += sz[v];
    parent[v] = u;
    return true;
}
void Kruskal(){
    vector<edge> MST;
    sort(E.begin(), E.end(), [](edge a, edge b) -> bool{
        return a.w < b.w;
    });
    for(auto it : E){
        if(MST.size() == n - 1) break; 
        if(Union(it.x, it.y)){
            MST.push_back(it);
            res += it.w;
        }
    }
    if(MST.size() < n - 1){
        cout << "IMPOSSIBLE" << endl;
    }
    else cout << res << endl;
}
int main(){
    Quick();
    input();
    init();
    Kruskal();
    return 0;
}