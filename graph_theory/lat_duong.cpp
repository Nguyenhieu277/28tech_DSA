#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int parent[MAX], sz[MAX];
int n, m, res = INT_MIN;
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
    return parent[u] = Find(parent[u]);
}
bool Union(int x, int y){
    x = Find(x);
    y = Find(y);
    if(x == y) return false;
    if(sz[x] < sz[y]){
        swap(x, y);
    }
    sz[x] += sz[y];
    res = max(res, sz[x]);
    parent[y] = x;
    return true;
}
int main(){
    Quick();
    cin >> n >> m;
    init();
    int ans = n;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        if(Union(x, y)){
            --ans;
        }
        cout << ans << " " << res << endl;
    }
    return 0;
}