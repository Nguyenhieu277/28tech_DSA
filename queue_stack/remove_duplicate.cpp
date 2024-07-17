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
    cin >> s;
    stack<char> st;
    for(char it : s){
        if(!st.empty() && st.top() == it){
            st.pop();
        }
        else{
            st.push(it);
        }
    }
    string res = "";
    while(!st.empty()){
        res = st.top() + res;
        st.pop();
    }
    if(res.empty()) cout << "EMPTY" << endl;
    else cout << res << endl;
    return 0;
}