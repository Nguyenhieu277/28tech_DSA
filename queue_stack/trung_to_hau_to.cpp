#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int prioritize(char s){
    if(s == '+' || s == '-'){
        return 1;
    }
    else if(s == '/' || s == '*'){
        return 2;
    }
    else if(s == '^'){
        return 3;
    }
    else if(s == '(') return 0;
}
void convert(string s){
    stack<char> st;
    string res = "";
    for(char it : s){
        if(it == '('){
            st.push(it);
        }
        else if(isalpha(it)){
            res += char(it);
        }
        else if(it == ')'){
            while(!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prioritize(st.top()) >= prioritize(it)){
                res += st.top();
                st.pop();
            }
            st.push(it);
        }
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    cout << res << endl;
}
int main(){
    Quick();
    string s;
    cin >> s;
    convert(s);
    return 0;
}