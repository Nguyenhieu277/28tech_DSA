#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
int parent[MAX], sz[MAX];
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
int Union(int x, int y){
    x = Find(x);
    y = Find(y);
    if(x == y) return false;
    if(x < y) swap(x, y);
    sz[x] += sz[y];
    parent[y] = x;
    return true;
}
int main(){
    Quick();
    cin >> n >> m;
    init();
    if(m != n - 1){
        cout << 0 << endl;
        return 0;
    }
    int flag = 0;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        if(!Union(x, y)){
            flag = 1;
        }
    }
    if(!flag) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}