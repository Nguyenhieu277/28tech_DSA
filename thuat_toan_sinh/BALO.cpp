#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, s;
    cin >> n >> s;
    vector<int> w, v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        w.push_back(x);
    }
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    ll max_value = 0;
    for(int i = 0; i < (1 << n); i++){
        ll currentWeight = 0, currentValue = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                currentWeight += w[j];
                currentValue += v[j];
            }
        }
        if(currentWeight <= s){
            max_value = max(max_value, currentValue);
        }
    }
    cout << max_value << endl;
    return 0;
}