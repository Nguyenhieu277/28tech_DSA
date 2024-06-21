#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int n, m, a[100][100];
void input(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
}
int cnt = 0;
void backTracking(int i, int j){
    if(i == n && j == m){
        cnt++;
    }
    if(i + 1 <= n){
        backTracking(i + 1, j);
    }
    if(j + 1 <= m){
        backTracking(i, j + 1);
    }
    
}
int main(){
    quick();
    input();
    backTracking(1, 1);
    cout << cnt << endl;
    return 0;
}