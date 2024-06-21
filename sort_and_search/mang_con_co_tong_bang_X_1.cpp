#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void slidingWindow(vector<int> &v, int k){
    ll left = 0, right = 0, cnt = 0;
    ll sum = 0;
    while(right < v.size()){
        sum += v[right];
        while(sum > k){
            sum -= v[left];
            left++;
        }
        if(sum == k) cnt++;
        right++;
    }
    cout << cnt << endl;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    slidingWindow(v, k);
    return 0;
}