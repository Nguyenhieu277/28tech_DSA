#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    auto it1 = lower_bound(v.begin(), v.end(), x);
    auto it2 = upper_bound(v.begin(), v.end(), x);
    --it2;
    int p1 = it1 - v.begin(), p2 = it2 - v.begin();
    if(*it1 == x){
        cout << p1 << endl;
    }
    else{
        cout << -1 << endl;
    }
    if(*it2 == x){
        cout << p2 << endl;
    }
    else{
        cout << -1 << endl;
    }
    it2++;
    if(it1 != v.end()){
        cout << it1 - v.begin() << endl;
    }
    else{
        cout << -1 << endl;
    }
    if(it2 != v.end()){
        cout << it2 - v.begin() << endl;
    }
    else{
        cout << -1 << endl;
    }
    cout << it2 - it1 << endl;
    return 0;
}