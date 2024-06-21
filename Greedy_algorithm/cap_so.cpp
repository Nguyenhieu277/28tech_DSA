#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int mark[max_n];
int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    vector<int> even;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0) even.push_back(a[i]);
        mark[a[i]] = 1;
    }
    if(even.size() % 2 == 0){
        cout << "YES" << endl;
        return 0;
    }
    else{
        for(int it : even){
            if(mark[it + 1] || mark[it - 1]){
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}