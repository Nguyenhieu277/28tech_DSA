#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int main(){
    int n;
    cin >> n;
    vector<char> v;
    for(int i = 0; i < n; i++){
        char x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(char it : v) cout << it << " ";
    cout << endl;
    sort(v.begin(), v.end(), greater<char>());
    for(char it : v) cout << it << " ";
    cout << endl;
    return 0;
}
