#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

char a[max_n][max_n];
int n, m, mark[max_n][max_n] = {0};
int flag = 0;
string target;
const int dx[] = {-1, 0, 0, 1};
const int dy[] = {0, -1, 1, 0};
void Loang(int x, int y, int idx, string tmp){
    // cout << tmp << endl;
    mark[x][y] = 1;
    if(flag){
        return;
    }
    if(tmp == target){
        flag = 1;
        return;
    }
    for(int i = 0; i < 4; i++){
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && !mark[x1][y1] && target[idx] == a[x1][y1]){
            Loang(x1, y1, idx + 1, tmp + a[x1][y1]);
        }
    } 
    mark[x][y] = 0;
}
int main(){
    quick();
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    cin >> target;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            string tmp = "";
            Loang(i, j, 0, tmp);
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}