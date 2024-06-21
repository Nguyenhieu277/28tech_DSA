#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void slidingWindow(string s, string t){
    map<char, int> current, target;
    for(char it : t){
        target[it]++;
    }
    int left = 0, cnt = 0, minlength = 1e9;
    string res = "";
    for(int right = 0; right < s.size(); right++){
        if(target.find(s[right]) != target.end()){
            current[s[right]]++;
            if(current[s[right]] <= target[s[right]]){
                cnt++;
            }
            while(cnt == t.size()){
                if(right - left + 1 < minlength){
                    minlength = right - left + 1;
                    res = s.substr(left, minlength);
                }
                if(target.find(s[left]) != target.end()){
                    current[s[left]]--;
                    if(current[s[left]] < target[s[left]]){
                        cnt--;
                    }
                }
            left++;
            }
        }
    }
    cout << res << endl;
}
int main(){
    quick();
    string s, t;
    cin >> s >> t;
    slidingWindow(s, t);
    return 0;
}