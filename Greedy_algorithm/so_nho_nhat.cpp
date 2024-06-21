#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, k;
    cin >> n >> k;
    if(n > 9 * k){
        cout << -1 << endl;
        return 0;
    }
    vector<int> a(k + 1);
    int tmp = n;
    tmp--;
    int curr = 9;
    a[1] = 1;
    for(int i = k; i >= 2; i--){
        if(tmp > curr){
            a[i] = curr;
            tmp -= curr;
        }
        else{
            a[i] = tmp;
            tmp = 0;
        }
    }
    for(int i = 1; i <= k; i++){
        cout << a[i];
    }
    cout << endl;
    return 0;
}