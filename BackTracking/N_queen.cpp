#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int a[10001], col[10001], row[10001], a1[10001], a2[10001];
int n, cnt = 0;
void backTracking(int i){
    for(int j = 1; j <= n; j++){
        if(col[j] == 0 && row[j] == 0 && a1[i - j + n] == 0 && a2[i + j - 1] == 0){
            a[i] = j;
            col[j] = 1;
            row[j] = 1;
            a1[i - j + n] = 1;
            a2[i + j - 1] = 1;
            if(i == n){
                cnt++;
            }
            else{
                backTracking(i + 1);
            }
            col[j] = 0;
            row[j] = 0;
            a1[i - j + n] = 0;
            a2[i + j - 1] = 0;
        }
    }
}
int main(){
    quick();
    cin >> n;
    backTracking(1);
    cout << cnt << endl;
    return 0;
}
