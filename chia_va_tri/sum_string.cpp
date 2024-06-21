#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 6
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

/*created by: HiuDev*/

string res = "", tmp = "";
int n;
int a[max_n][max_n];
int mark[max_n][max_n] = {0};
void Loang(int x, int y){
    tmp += to_string(a[x][y]);
    if(x == n - 1 && y == n - 1){
        // tmp += to_string(a[x][y]);
        if(res.size() < tmp.size() || (res.size() == tmp.size() && res < tmp)){
            res = tmp;
        }
        tmp.pop_back();
        return;
    }
    mark[x][y] = 1;
    for(int i = 0; i < 4; i++){
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < n && !mark[x1][y1]){
            Loang(x1, y1);
        }
    }
    tmp.pop_back();
    mark[x][y] = 0;
}
int main(){
    quick();
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    Loang(0, 0);
    cout << res << endl;
    return 0;
}