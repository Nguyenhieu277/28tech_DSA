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
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 1) cnt1++;
        else if(v[i] == 2) cnt2++;
        else if(v[i] == 3) cnt3++;
        else if(v[i] == 4) cnt4++;
    }
    int ans = 0;
    // nhom 4 nguoi
    ans += cnt4;
    //nhom 3 nguoi + nhom 1 nguoi
    int tmp = min(cnt3, cnt1);
    ans += cnt3;
    cnt1 -= tmp;
    //nhom 2 nguoi
    ans += cnt2 / 2;
    cnt2 %= 2;
    if(cnt2 == 1){
        if(cnt1 >= 2){
            ans++;
            cnt1 -= 2;
        }
        else if(cnt1 == 1){
            ans++;
            cnt1 = 0;
        }
        else ans++;
    }
    if(cnt1 > 0){
        ans += cnt1 / 4;
        if(cnt1 % 4 != 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}