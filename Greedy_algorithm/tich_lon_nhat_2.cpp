#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define mIN_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    for(int i = 0; i < n; i++){
        if(max1 < v[i]){
            max3 = max2;
            max2 = max1;
            max1 = v[i];
        }
        else if(max2 < v[i]){
            max3 = max2;
            max2 = v[i];
        }
        else if(max3 < v[i]){
            max3 = v[i];
        }
        if(min1 > v[i]){
            min2 = min1;
            min1 = v[i];
        }
        else if(min2 > v[i]){
            min2 = v[i];
        }
    }
    ll product1 = (ll)max1 * max2;
    ll product2 = (ll)max1 * max2 * max3;
    ll product3 = (ll)min1 * min2 * max1;
    cout << max(product1, max(product2, product3)) << endl;
    return 0;
}