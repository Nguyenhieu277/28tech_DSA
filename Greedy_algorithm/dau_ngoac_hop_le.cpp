#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int countOperations(string s){
    stack<char> st;
    int cnt = 0;
    for(char it : s){
        if(it == '('){
            st.push(it);
        }
        else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    quick();
    string s;
    cin >> s;
    if(s.size() % 2 != 0){
        cout << 0 << endl;
        return 0;
    }
    cout << countOperations(s) << endl;
    return 0;
}