#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void composed(int n){
    int v[max_n][max_n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(i == j || j == 0){
                v[i][j] = 1;
            }
            else{
                v[i][j] = (v[i - 1][j - 1]) + (v[i - 1][j]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << v[i][j] << " ";
        }
        cout << endl << endl;
    }
}
int main(){
    int n;
    cin >> n;
    composed(n);
    return 0;
}