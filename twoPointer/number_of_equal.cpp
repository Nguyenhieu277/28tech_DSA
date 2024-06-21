#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
ll countEqual(vector<int> &v1, vector<int> &v2){
    ll cnt = 0;
    int i = 0, j = 0; 
    while(i < v1.size() && j < v2.size()){
        if(v1[i] == v2[j]){
            int res = v1[i];
            ll cnt1 = 0, cnt2 = 0;
            while(v1[i] == res && i < v1.size()){
                cnt1++;
                i++;
            }
            while(v2[j] == res && j < v2.size()){
                cnt2++;
                j++;
            }
            cnt += cnt1 * cnt2;
        }
        else if(v1[i] < v2[j]){
            i++;
        }
        else j++;
    }
    return cnt;
}
int main(){
    quick();
    int n, m;
    cin >> n >> m;
    vector<int> v1, v2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v1.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        v2.push_back(x);
    }
    ll res = countEqual(v1, v2);
    cout << res << endl;
    return 0;
}
