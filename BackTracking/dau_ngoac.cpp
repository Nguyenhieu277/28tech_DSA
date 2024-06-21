#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n;
vector<string> a;
bool isValid(string s){
    stack<char> st;
    for(char it : s){
        if(it == '(' || it == '[' || it == '{'){
            st.push(it);
        }
        else{
            if((it == ')' && st.top() == '(') || (it == ']' && st.top() == '[') || (it == '}' && st.top() == '{')){
                st.pop();
            }
            else return false;
        }
    }
    return st.empty();
}
void backTracking(string tmp, int open, int close){
    if(tmp.size() == n){
        if(isValid(tmp)){
            a.push_back(tmp);
        }
        return;
    }
    if(open < n / 2){
        backTracking(tmp + '(', open + 1, close);
        backTracking(tmp + '[', open + 1, close);
        backTracking(tmp + '{', open + 1, close);
    }
    if(close < open){
        backTracking(tmp + ')', open, close + 1);
        backTracking(tmp + ']', open, close + 1);
        backTracking(tmp + '}', open, close + 1);
    }
}
int main(){
    quick();
    string tmp = "";
    cin >> n;
    if(n % 2 != 0){
        cout << "NOT FOUND" << endl;
        return 0;
    }
    backTracking(tmp, 0, 0);
    if(a.empty()){
        cout << "NOT FOUND" << endl;
    }
    else{
        sort(a.begin(), a.end());
        for(string it : a){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}