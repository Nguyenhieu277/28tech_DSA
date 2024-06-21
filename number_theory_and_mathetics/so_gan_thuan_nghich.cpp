#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isHalfPalindromic(string s){
    if((s[0] - '0') * 2 == (s[s.size() - 1] - '0') || (s[0] - '0') == (s[s.size() - 1] - '0') * 2){
        for(int i = 1; i <= s.size() - 2; i++){
            if(s[i] != s[s.size() - i - 1]){
                return false;
            }
        }
        return true;
    }
    else return false;
}
int main(){
    string s;
    cin >> s;
    if(isHalfPalindromic(s)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}