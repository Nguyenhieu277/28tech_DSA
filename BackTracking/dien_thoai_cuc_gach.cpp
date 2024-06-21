#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

map<int, string> mp;
vector<string> res;
string s, tmp;
void backTracking(int idx){
    if(idx == s.size()){
        res.push_back(tmp);
    }
    for(auto it : mp[s[idx] - '0']){
        tmp.push_back(it);
        backTracking(idx + 1);
        tmp.pop_back();
    }
}
int main(){
    quick();
    mp[2] = "abc"; mp[3] = "def";
    mp[4] = "ghi"; mp[5] = "jkl";
    mp[6] = "mno"; mp[7] = "pqrs";
    mp[8] = "tuv"; mp[9] = "wxyz";
    cin >> s;
    sort(s.begin(), s.end());
    backTracking(0);
    for(auto it : res) cout << it << " ";
    return 0;
}