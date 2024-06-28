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
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
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
int countConnected(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS(i);
            cnt++;
        }
    }
    return cnt;
}
void PillarTop(){
    int cnt = 0;
    int tmp = countConnected(n);
    for(int i = 1; i <= n; i++){
        memset(visited, 0, sizeof(visited));
        visited[i] = 1;
        if(tmp < countConnected(n)){
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main(){
    quick();
    input();
    PillarTop();
    return 0;
}