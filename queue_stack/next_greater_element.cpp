#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> findNextGreater(vector<int> &v, int n){
    vector<int> res(n, -1);
    stack<int> st;
    for(int i = v.size() - 1; i >= 0; i--){
        while(!st.empty() && st.top() <= v[i]){
            st.pop();
        }
        if(!st.empty()){
            res[i] = st.top();
        }
        st.push(v[i]);
    }
    return res;
}
int main(){
    Quick();
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    vector<int> res = findNextGreater(v, n);
    for(auto it : res){
        cout << it << " ";
    }
    return 0;
}