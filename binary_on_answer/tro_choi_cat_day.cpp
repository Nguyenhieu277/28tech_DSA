#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool F(vector<int> &v, int k, double mid){
    ll sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += (int)(v[i] / mid);
    }
    return sum >= k;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    double left = 0, right = 1e9;
    double res = -1;
    for(int i = 1; i <= 200; i++){
        double mid = (left + right) / 2;
        if(F(v, k, mid)){
            res = mid;
            left = mid;
        }
        else right = mid;
    } 
    cout << fixed << setprecision(6) << res << endl;
    return 0;
}