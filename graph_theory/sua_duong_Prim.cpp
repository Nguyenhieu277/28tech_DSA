#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;
#define max_n 200001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
ll res = 0;
vector<pii> List[max_n];
int visited[max_n];
int used[max_n];
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        List[x].push_back({y, w});
        List[y].push_back({x, w});
    }
    memset(used, 0, sizeof(used));
}
void Prim(int u){
    used[u] = 1;
    vector<int> MST;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    for(pii it : List[u]){
        if(!used[it.first]){
            q.push({it.second, it.first});
        }
    }
    while(!q.empty()){
        pii x = q.top();
        q.pop();
        int x1 = x.second, x2 = x.first;
        if(!used[x1]){
            res += x2;
            used[x1] = 1;
            MST.push_back(x1);
            for(pii it : List[x1]){
                if(!used[it.first]){
                    q.push({it.second, it.first});
                }
            }
        }
    }
    if(MST.size() == n - 1) cout << res << endl;
    else cout << "IMPOSSIBLE" << endl;
}
int main(){
    Quick();
    input();
    Prim(1);
    return 0;
}