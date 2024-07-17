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
    int operation;
    cin >> operation;
    stack<int> st;
    while(operation--){
        string s; 
        cin >> s;
        if(s == "push"){
            int x; 
            cin >> x;
            st.push(x);
        }
        else if(s == "top"){
            if(st.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << st.top() << endl;
            }
        }
        else if(s == "pop"){
            if(st.empty()){
                continue;
            }
            else st.pop();
        }
    }
    return 0;
}