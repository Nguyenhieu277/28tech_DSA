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
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    map<int, int> mp;
    ll left = 0, right = 0;
    ll ans = -1;
    while(right < n){
        mp[v[right]]++;
        while(mp[v[right]] > 1){
            mp[v[left]]--;
            ++left;
        }
        ans = max(ans, right - left + 1);
        right++;
    }
    cout << ans << endl;
    return 0;
}