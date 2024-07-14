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
int visited[max_n];
map<int, int> level;
vector<int> v;
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
        level[x]++; level[y]++;
    }
}
void DFS(int u){
    v.push_back(u);
    visited[u] = 1;
    for(int it : List[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
}
int main(){
    Quick();
    input();
    int cnt = 0;
    memset(visited, 0, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            v.clear();
            DFS(i);
            for(int it : v){
                if(level[it] != v.size() - 1){
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}