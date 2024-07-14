#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m, flag = 0;
int s1, s2, t1, t2;
char a[max_n][max_n];
int visited[max_n][max_n];
void DFS(int x, int y, int cnt, int prev){
    if(cnt > 3) return;
    if(flag) return;
    if(x == t1 && y == t2){
        flag = 1;
        return;
    }
    visited[x][y] = 1;
    for(int i = 0; i < 4; i++){
        int xi = x + dx[i];
        int yi = y + dy[i];
        if(xi >= 1 && xi <= n && yi >= 1 && yi <= m && !visited[xi][yi] && a[xi][yi] != '*'){
            int tmp = (i == prev) ? cnt : cnt + 1;
            DFS(xi, yi, tmp, i);
        }
    }
    visited[x][y] = 0;
}
int main(){
    Quick();
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] == 'T'){
                t1 = i; t2 = j;
            }
            if(a[i][j] == 'S'){
                s1 = i; s2 = j;
            }
        }
    }
    DFS(s1, s2, 0, -1);
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}