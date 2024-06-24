#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> List[max_n];
int visited[max_n];
void DFS(int u){
    cout << u << " ";
    visited[u] = 1;
    for(int it : List[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
}
int main(){
    quick();
    int n, m, s;
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(List[i].begin(), List[i].end());
    }
    DFS(s);
    return 0;
}