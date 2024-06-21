#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

struct Schedule{
    int ID, dealine, profit;
};
bool cmp(Schedule a, Schedule b){
    return a.profit > b.profit;
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<Schedule> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].ID >> v[i].dealine >> v[i].profit;
    }
    sort(v.begin(), v.end(), cmp);
    int mark[n + 1] = {0};
    ll ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = v[i].dealine - 1; j >= 0; j--){
            if(mark[j] == 0){
                mark[j] = 1;
                ans += v[i].profit;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}