#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> findFirstSmaller(vector<int> &v, int n){
    vector<int> res(n, -1);
    stack<pair<int, int>> st;
    for(int i = 0; i < n; i++){
        while(!st.empty() && v[i] > st.top().first){
            int idx = st.top().second;
            st.pop();
            for(int j = i + 1; j < n; j++){
                if(v[j] < v[i]){
                    res[idx] = v[j];
                    break;
                }
            }
        }
        st.push({v[i], i});
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
    vector<int> res = findFirstSmaller(v, n);
    for(auto it : res){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}