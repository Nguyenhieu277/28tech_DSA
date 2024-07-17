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
    stack<ll> st;
    string s;
    while(operation--){
        cin >> s;
        if(s == "show"){
            if(st.empty()){
                cout << "EMPTY" << endl;
            }
            else{
                vector<ll> v;
                int n = st.size();
                while(!st.empty()){
                    ll x = st.top();
                    st.pop();
                    v.push_back(x);
                }
                reverse(v.begin(), v.end());
                for(auto it : v){
                    cout << it << " ";
                    st.push(it);
                }
                cout << endl;
            }
        }
        else if(s == "push"){
            ll n; cin >> n;
            st.push(n);
        }
        else if(s == "pop"){
            if(!st.empty())
                st.pop();
        }
    }
    return 0;
}