#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
int visited[max_n][max_n];
char a[max_n][max_n];
queue<pii> q;
void input(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}
void BFS(int u, int v){
    q.push({u, v});
    visited[u][v] = 1;
    while(!q.empty()){
        pii x = q.front();
        q.pop();
        int x1 = x.first, x2 = x.second;
        for(int i = 0; i < 4; i++){
            int xi = x1 + dx[i];
            int yi = x2 + dy[i];
            if(xi >= 0 && xi < n && yi >= 0 && yi < m && !visited[xi][yi] && a[xi][yi] == '.'){
                q.push({xi, yi});
                visited[xi][yi] = 1;
            }
        } 
    }
}
int countRooms(){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visited[i][j] && a[i][j] == '.'){
                BFS(i, j);
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    Quick();
    input();
    cout << countRooms() << endl;
    return 0;
}