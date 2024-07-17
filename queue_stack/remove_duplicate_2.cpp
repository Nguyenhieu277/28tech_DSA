#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    Quick();
    string s;
    int k;
    cin >> s >> k;
    stack<pair<char, int>> st;
    for(char it : s){
        if(!st.empty() && st.top().first == it){
            st.top().second++;
        }
        else{
            st.push({it, 1});
        }
        if(st.top().second == k){
            st.pop();
        }
    }
    string res = "";
    while(!st.empty()){
        res = string(st.top().second, st.top().first) + res;
        st.pop();
    }
    if(res.empty()) cout << "EMPTY" << endl;
    else cout << res << endl;
    return 0;
}