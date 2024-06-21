#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n;
vector<int> a(100001);
int main(){
    quick();
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < (1 << n); i++){
        int sum1 = 0, sum2 = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                sum1 += a[j];
            }
            else sum2 += a[j];
        }
        if(sum1 == sum2){
            cout << 1 << endl;
            return 0;
        }
    }  
    cout << 0 << endl;
    return 0;
}