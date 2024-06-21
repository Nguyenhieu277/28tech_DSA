#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
int segmentCount(vector<int> &v, int s){
    int left = 0, right = 0;
    int cnt = 0, sum = 0;
    while(right < v.size()){
        sum += v[right];
        while(sum > s){
            sum -= v[left];
            left++;
        }
        cnt += (right - left + 1);
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
    int res = segmentCount(v, s);
    cout << res << endl;
    return 0;
}
