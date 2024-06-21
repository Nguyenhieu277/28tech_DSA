#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
ll segmentCount(vector<int> &v, int s){
    ll left = 0, right = 0;
    ll cnt = 0, distance = 0;
    map<int, int> mp;
    while(right < v.size()){
        mp[v[right]]++;
        if(mp[v[right]] == 1){
            distance++;
        }
        while(distance > s){
            mp[v[left]]--;
            if(mp[v[left]] == 0){
                distance--;
            }
            left++;
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
