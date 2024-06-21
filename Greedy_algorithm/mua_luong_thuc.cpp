#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

struct Dish{
    int amount, day, needs;
};
int main(){
    quick();
    Dish a;
    cin >> a.amount >> a.day >> a.needs;
    int target = a.day * a.needs;
    int totalDay = 0;
    if(a.day >= 7){
        totalDay = (a.day / 7) * 6 + min(6, a.day % 7);
    }
    else totalDay = min(6, a.day);
    if(target > totalDay * a.amount){
        cout << -1 << endl;        
    }
    else{
        int res = ceil((double) target / a.amount);
        cout << res << endl;
    }
    return 0;
}