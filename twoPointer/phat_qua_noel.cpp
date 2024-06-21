#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
ll maxGifts(vector<int> &v, int s){
    ll left = 0, right = 0;
    ll sum = 0, maxgift = 0;
    while(right < v.size()){
        sum += v[right];
        if(sum > s){
            sum -= v[left];
            left++;
        }
        maxgift = max(maxgift, right - left + 1);
        right++;
    }
    return maxgift;
}
int main(){
    int n;
    ll s;
    cin >> n >> s;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    ll res = maxGifts(v, s);
    cout << res << endl;
    return 0;
}
