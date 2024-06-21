#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
ll segmentCount(vector<int> &v, int k){
    ll left = 0, right = 0;
    ll cnt = 0;
    int minVal = v[0], maxVal = v[0];
    while(right < v.size()){
        minVal = min(minVal, v[right]);
        maxVal = max(maxVal, v[right]);
        while(maxVal - minVal > k){
            left++;
            minVal = *min_element(v.begin() + left, v.begin() + right + 1);
            maxVal = *max_element(v.begin() + left, v.begin() + right + 1);
        }
        cnt += right - left + 1;
        right++;
    }
    return cnt;
}
int main(){
    int n, s;
    cin >> n >> s;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    ll res = segmentCount(v, s);
    cout << res << endl;
    return 0;
}
