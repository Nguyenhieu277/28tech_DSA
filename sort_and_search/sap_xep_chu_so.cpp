#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void splitDigits(vector<int> &v){
    set<int> se;
    for(int i = 0; i < v.size(); i++){
        while(v[i] != 0){
            int m = v[i] % 10;
            se.insert(m);
            v[i] /= 10;
        }
    }
    for(int it : se){
        cout << it << " ";
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    splitDigits(v);
    return 0;
}