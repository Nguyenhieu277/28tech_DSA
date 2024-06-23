#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m, cnt = 0;
vector<int> ke[200005];
int visited[200005] = {0};
int mark[200005];
void nhap(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
void DFS(int u){
    visited[u] = 1;
    mark[u] = cnt;
    for(int it : ke[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
}
int main(){
    quick();
    nhap();
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt++;
            DFS(i);
        }
    }
    int q;
    cin >> q;
    while(q--){
        int s, t;
        cin >> s >> t;
        if(mark[s] == mark[t]) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}