#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
vector<int> List[max_n], re_List[max_n];
int visited[max_n];
stack<int> st;
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        re_List[y].push_back(x);
    }
}
void DFS(int u){
    visited[u] = 1;
    for(int it : List[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
    st.push(u);
}
void DFS2(int u){
    visited[u] = 1;
    for(int it : re_List[u]){
        if(!visited[it]){
            DFS2(it);
        }
    }
}
void Kosaraju(){
    for(int i = 1; i <= n; i++){
        if(!visited[i]) DFS(i);
    }
    memset(visited, 0, sizeof(visited));
    int cnt = 0;
    while(!st.empty()){
        int x = st.top();
        st.pop();
        if(!visited[x]){
            DFS2(x);
            ++cnt;
        }
    }
    if(cnt == 1) cout << 1 << endl;
    else cout << 0 << endl;
}
int main(){
    Quick();
    input();
    Kosaraju();
    return 0;
}