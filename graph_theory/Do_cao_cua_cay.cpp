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
vector<int> height(max_n);
void input(){
    cin >> n;
    for(int i = 1; i < n; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
}
void DFS(int u, int cnt){
    visited[u] = 1;
    height[u] = cnt;
    for(int v : List[u]){
        if(!visited[v]){
            DFS(v, cnt + 1);    
        }
    }
}
int main(){
    Quick();
    input();
    DFS(1, 0);
    for(int i = 1; i <= n; i++){
        cout << height[i] << " ";
    }
    cout << endl;
    return 0;
}