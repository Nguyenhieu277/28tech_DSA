#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    Quick();
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int flag = 0;
    for(int i = 1; i < n; i++){
        if(v[i] <= v[i - 1]){
            flag = 1;
            break;
        }
    }
    if(!flag){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}
/* No Code - No Bug */