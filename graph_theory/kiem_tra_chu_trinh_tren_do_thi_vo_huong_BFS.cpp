#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <vector<int>> vv;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
vector<int> List[max_n];
int visited[max_n];
int parent[max_n];
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
}
bool BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int it : List[x]){
            if(!visited[it]){
                q.push(it);
                visited[it] = 1;
                parent[it] = x;
            }
            else if(it != parent[x]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    Quick();
    input();
    memset(visited, 0, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(BFS(i)){
                cout << 1 << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}