#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m, s, t;
vector<int> List[max_n];
int visited[max_n];
int mark[max_n];
vector<int> path;
int found = false;
void input(){
    cin >> n >> m >> s >> t;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(List[i].begin(), List[i].end());
    }
}

void DFS(int u) {
    visited[u] = 1;
    path.push_back(u);
    if(u == t){
        found = true;
        return;
    }
    for(int it : List[u]){
        if(!visited[it]){
            DFS(it);
            if(found) return;
        }
    }
    if(!found) path.pop_back();
}
int main(){
    quick();
    input();
    DFS(s);
    if(found){
        for(int it : path){
            cout << it << " ";
        }
        cout << endl;
    }
    else cout << -1 << endl;
    return 0;
}