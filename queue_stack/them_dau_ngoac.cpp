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
        if(it == '('){
            st.push(it);
        }
        else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else st.push(it);
        }
    }
    int open = 0, close = 0;
    while(!st.empty()){
        if(st.top() == '('){
            open++;
        }
        else{
            close++;
        }
        st.pop();
    }
    cout << open + close << endl;
    return 0;
}