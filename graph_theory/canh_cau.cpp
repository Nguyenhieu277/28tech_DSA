#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

set<int> List[max_n];
vector<pair<int, int>> edge;
int visited[max_n];
int n, m;
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].insert(y);
        List[y].insert(x);
        edge.push_back({x, y});
    }
}
void DFS(int u){
    visited[u] = 1;
    for(int it : List[u]){
        if(!visited[it]) DFS(it);
    }
}
int countConnected(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS(i);
            cnt++;
        }
    }
    return cnt;
}
void output(){
    int cnt = 0;
    int tmp = countConnected(n);
    for(auto it : edge){
        int x = it.first, y = it.second;
        List[x].erase(y);
        List[y].erase(x);
        memset(visited, 0, sizeof(visited));
        if(tmp < countConnected(n)){
            cnt++;
        }
        List[x].insert(y);
        List[y].insert(x);
    }
    cout << cnt << endl;
}
int main(){
    quick();
    input();
    output();
    return 0;
}