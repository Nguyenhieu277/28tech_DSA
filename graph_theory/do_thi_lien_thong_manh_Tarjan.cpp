#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1005
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m, scc = 0, timer = 0;
vector<int> List[max_n];
int visited[max_n], inStack[max_n];
stack<int> st;
int low[max_n], disc[max_n];
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
    }
    memset(visited, 0, sizeof(visited));
    memset(inStack, 0, sizeof(inStack));
}
void Tarjan(int u){
    visited[u] = inStack[u] = 1;
    low[u] = disc[u] = ++timer;
    st.push(u);
    for(int v : List[u]){
        if(!visited[v]){
            Tarjan(v);
            low[u] = min(low[u], low[v]);
        }
        else if(inStack[v]){
            low[u] = min(low[u], disc[v]);
        }
    }
    if(low[u] == disc[u]){
        ++scc;
        while(st.top() != u){
            inStack[st.top()] = 0;
            st.pop(); 
        }
        inStack[st.top()] = 0;
        st.pop();
    }
}
int main(){
    Quick();
    input();
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            Tarjan(i);
        }
    }
    if (scc == 1) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}