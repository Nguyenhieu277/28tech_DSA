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
        if(x == 0){
            v2.push_back(x);
        }
        else v1.push_back(x);
    }
    for(int it : v1){
        cout << it << " ";
    }
    for(int it : v2){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}