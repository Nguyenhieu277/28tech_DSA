#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void solve(string s){
    stack<int> st;
    for(int i = s.size() - 1; i >= 0; i--){
        if(isdigit(s[i])){
            st.push(s[i] - '0');
        }
        else{
            int tmp1 = st.top(); st.pop();
            int tmp2 = st.top(); st.pop();
            if(s[i] == '+') st.push(tmp1 + tmp2);
            else if(s[i] == '-') st.push(tmp1 - tmp2);
            else if(s[i] == '/') st.push(tmp1 / tmp2);
            else st.push(tmp1 * tmp2);
        }
    }
    cout << st.top() << endl;
}
int main(){
    Quick();
    string s;
    cin >> s;
    solve(s);
    return 0;
}