#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

stack<int> st;
bool isValid(string s){
    for(auto it : s){
        if(it == '(' || it == '[' || it == '{'){
            st.push(it);
        }
        else{
            if(st.empty()) return false;
            char x = st.top();
            if(!st.empty() && (it == ')' && x == '('|| it == ']' && x == '[' || it == '}' && x == '{')){
                st.pop();
            }
            else return false;
        }
    }
    return st.empty();
}
int main(){
    Quick();
    string s;
    cin >> s;
    if(isValid(s)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}