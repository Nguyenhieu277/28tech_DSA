#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

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
void DFS(int u, int &cnt){
    visited[u] = 1;
    cnt++;
    for(int it : List[u]){
        if(!visited[it]){
            DFS(it, cnt);
        }
    }
}
int main(){
    Quick();
    input();
    int maxCount = INT_MIN;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            int cnt = 0;
            DFS(i, cnt);
            maxCount = max(maxCount, cnt);
        }
    }
    cout << maxCount << endl;
    return 0;
}