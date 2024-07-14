#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int sz[max_n], parent[max_n];
int n, m;
void init(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}
int Find(int u){
    if(parent[u] == u){
        return u;
    }
    else return parent[u] = Find(parent[u]);
}
bool Union(int x, int y){
    x = Find(x);
    y = Find(y);
    if(x == y) return false;
    if(sz[x] < sz[y]) swap(x, y);
    sz[x] += sz[y];
    parent[y] = x;
    return true;
}
int main(){
    Quick();
    init();
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        Union(x, y);
    }
    cout << *max_element(sz + 1, sz + n + 1) << endl;
    return 0;
}