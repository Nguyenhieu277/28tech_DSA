#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void slidingWindow(string s){
    map<char, int> mp;
    set<char> se;
    int cnt = 0, dis_cnt = 0;
    for(char it : s){
        se.insert(it);
    }
    dis_cnt = se.size();
    int left = 0, res = s.size();
    for(int right = 0; right < s.size(); right++){
        mp[s[right]]++;
        if(mp[s[right]] == 1) cnt++;
        if(cnt == dis_cnt){
            while(mp[s[left]] > 1){
                if(mp[s[left]] > 1) mp[s[left]]--;
                ++left;
            }
            res = min(res, right - left + 1);
        }
    }
    cout << res << endl;
}
int main(){
    quick();
    string s;
    cin >> s;
    slidingWindow(s);
    return 0;
}