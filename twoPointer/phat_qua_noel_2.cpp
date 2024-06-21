#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
ll minGifts(vector<int> &v, int s){
    ll left = v.size() - 1, right = v.size() - 1;
    ll sum = 0, mingift = v.size() + 1;
    while(left >= 0){
        sum += v[left];
        while (sum >= s) {
            mingift = min(mingift, right - left + 1);
            sum -= v[right];
            right--;
        }
        left--;
    }
    if(mingift == v.size() + 1) return -1;
    else return mingift;

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
    ll res = minGifts(v, s);
    cout << res << endl;
    return 0;
}
