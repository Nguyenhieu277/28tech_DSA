#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int countIsValid(string s){
    stack<char> st;
    int open = 0, close = 0;
    for(char it : s){
        if(it == '('){
            st.push(it);
        }
        else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                close++;
            }
        }
    }
    open = st.size();
    return (open + 1) / 2 + (close + 1) / 2;
}
int main(){
    Quick();
    string s;
    cin >> s;
    cout << countIsValid(s) << endl;
    return 0;
}