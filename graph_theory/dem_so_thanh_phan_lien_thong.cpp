#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
vector<int> ke[200005];
int visited[200005] = {0};
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
    for(int it : ke[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
}
int main(){
    quick();
    nhap();
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS(i);
            ++dem;
        }
    }
    cout << dem << endl;
    return 0;
}