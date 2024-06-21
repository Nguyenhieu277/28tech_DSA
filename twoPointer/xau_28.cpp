#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
ll LongestSequence(string s, int x, int y){
    ll cnt_2 = 0, cnt_8 = 0;
    ll res = 0;
    ll left = 0, right = 0;
    while(right < s.size()){
        if(s[right] == '2') cnt_2++;
        else if(s[right] == '8') cnt_8++;
        while(cnt_2 > x || cnt_8 > y){
            if(s[left] == '2') cnt_2--;
            else if(s[left] == '8') cnt_8--;
            left++;
        }
        res = max(res, right - left + 1);
        right++;
    }
    return res;
}
int main(){
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    cout << LongestSequence(s, x, y) << endl;
    return 0;
}
