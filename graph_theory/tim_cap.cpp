#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n;
vector<int> List[max_n];
int visited[max_n];
vector<int> depths(max_n);
void input(){
    cin >> n;
    for(int i = 1; i < n; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
    }
}
int DFS(int u){
    int res = 1;
    for(int v : List[u]){
        res += DFS(v);
    }
    return depths[u] = res;
}
int main(){
    Quick();
    input();
    DFS(1);
    ll res = 0;
    for(int i = 1; i <= n; i++){
        res += depths[i];
    }
    cout << res << endl;
    return 0;
}