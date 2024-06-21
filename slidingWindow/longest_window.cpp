#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void slidingWindow(string s){
    multiset<char> se;
    int left = 0, right = 0, res = 0;
    while(right < s.size()){
        if(se.find(s[right]) != se.end()){
            while(se.find(s[right]) != se.end()){
                se.erase(s[left]);
                ++left;
            }
        }
        se.insert(s[right]);
        right++;
        res = max(res, right - left);
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