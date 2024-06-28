#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define pair <int, int> pii
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
vector<int> List[max_n];
int visited[max_n];
void input(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
    }
}
void DFS(int u){
    visited[u] = 1;
    for(int it : List[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
}
bool isStronglyConnected(int n){
    for(int i = 1; i <= n; i++){
        memset(visited, 0, sizeof(visited));
        DFS(i);
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    quick();
    input();
    if(isStronglyConnected(n)){
        cout << "1" << endl;
    }
    else cout << "0" << endl;
    return 0;
}