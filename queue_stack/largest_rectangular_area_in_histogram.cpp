#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void largestRectangularArea(vector<int> &v, int n){
    stack<int> st;
    ll maxArea = 0;
    int i = 0;
    while(i < n){
        if(!st.empty() && v[st.top()] > v[i]){
            int idx = st.top();
            st.pop();   
            maxArea = max(maxArea, (ll)v[idx] * (st.empty() ? i : i - st.top() - 1));
        }
        else{
            st.push(i++);
        }
    }
    while(!st.empty()){
        int idx = st.top();
        st.pop();
        maxArea = max(maxArea, (ll)v[idx] * (st.empty() ? i : i - st.top() - 1));
    }
    cout << maxArea << endl;
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
    largestRectangularArea(v, n);
    return 0;
}