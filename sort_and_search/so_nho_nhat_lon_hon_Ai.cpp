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
    vector<int> v1, v2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end());
    for(int it : v2){
        auto tmp = upper_bound(v1.begin(), v1.end(), it);
        if(tmp == v1.end()){
            cout << "_" << " ";
        }
        else{
            cout << *tmp << " ";
        }
    }
    cout << endl;
    return 0;
}