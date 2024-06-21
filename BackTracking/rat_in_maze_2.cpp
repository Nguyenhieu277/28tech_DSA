#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, a[100][100];
void input(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}
void backTracking(int i, int j, string s){
    if(i == n && j == n){
        cout << s << endl;
    }
    a[i][j] = 0;
    if(i + 1 <= n && a[i + 1][j] == 1){
        s += "D";
        backTracking(i + 1, j, s);
        s.pop_back();
    }
    if(j - 1 >= 1 && a[i][j - 1] == 1){
        s += "L";
        backTracking(i, j - 1, s);
        s.pop_back();
    }
    if(j + 1 <= n && a[i][j + 1] == 1){
        s += "R";
        backTracking(i, j + 1, s);
        s.pop_back();
    }
    if(i - 1 >= 1 && a[i - 1][j] == 1){
        s += "U";
        backTracking(i - 1, j, s);
        s.pop_back();
    }
    a[i][j] = 1;
}
int main(){
    quick();
    input();
    backTracking(1, 1, "");
    return 0;
}