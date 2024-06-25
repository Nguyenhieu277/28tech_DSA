#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> List[max_n];
int visited[max_n];
int parent[max_n];
int n, m, s, t;
void input(){
    cin >> n >> m >> s >> t;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(List[i].begin(), List[i].end());
    }
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int it : List[x]){
            if(!visited[it]){
                q.push(it);
                parent[it] = x;
                visited[it] = 1;
            }
        }
    }
}
void printPath(int s, int t){
    BFS(s);
    if(!visited[t]){
        cout << -1 << endl;
    }
    else{
        vector<int> res;
        while(t != s){
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int it : res) cout << it << " ";
    }
}
int main(){
    quick();
    input();
    printPath(s, t);
    return 0;
}