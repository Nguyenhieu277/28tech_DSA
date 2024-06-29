#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> List[max_n];
int visited[max_n];
int parent[max_n];
int n, m;
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
}
bool DFS(int u){
    visited[u] = 1;
    for(int it : List[u]){
        if(visited[it] == 1 && it != parent[u]){
            return true;
        }
        if(!visited[it]){
            parent[it] = u;
            if(DFS(it)){
                return true;
            }
        }
    }
    return false;
}
int main(){
    quick();
    input();
    memset(visited, 0, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(DFS(i)){
                cout << 1 << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}