#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int main(){
    quick();
    map<int, int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    int maxFrequence = -1e9;
    for(auto it : mp){
        maxFrequence = max(maxFrequence, it.second);
    }
    for(auto it : mp){
        if(maxFrequence == it.second){
            cout << it.first << " " << it.second << endl;
            break;
        }
    }
    return 0;
}
