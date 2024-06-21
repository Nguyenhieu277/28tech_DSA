#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, k, flag = 0, target;
int mark[max_n] = {0};
int a[max_n];
void backTracking(int i, int sum, int cnt){
    if((cnt == k) || flag){
        flag = 1;
        return;
    }
    for(int j = i; j <= n; j++){
        if(!mark[j] && sum + a[j] <= target){
            mark[j] = 1;
            sum += a[j];
            if(sum == target){
                backTracking(i, 0, cnt + 1);
            }
            else{
                backTracking(j + 1, sum, cnt);
            }
            sum -= a[j];
            mark[j] = 0;
        }
    }   
}
int main(){
    quick();
    cin >> n >> k;
    int Sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    Sum = accumulate(a + 1, a + n + 1, 0);
    if(Sum % k != 0){
        cout << 0 << endl;
        return 0;
    }   
    target = Sum / k;
    sort(a + 1, a + n + 1);
    backTracking(1, 0, 0);
    cout << flag << endl;
    return 0;
}