#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n;
    cin >> n;
    int cnt = 0;
    int money[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    for(int i = 0; i < 10; i++){
        if(n >= money[i]){
            cnt += n / money[i];
            n %= money[i];
        }
    }
    cout << cnt << endl;
    return 0;
}