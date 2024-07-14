#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m, s;
vector<pii> List[max_n];
int visited[max_n];
void input(){
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        List[x].push_back({y, w});
        List[y].push_back({x, w});
    }
}
void Dijkstra(int u){
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, u});
    vector<int> d(max_n, INT_MAX);
    d[u] = 0;
    while(!q.empty()){
        pii x = q.top();
        q.pop();
        int x1 = x.second, x2 = x.first;
        if(x2 > d[x1]){
            continue;
        }
        for(pii it : List[x1]){
            if(d[it.first] > d[x1] + it.second){
                d[it.first] = d[x1] + it.second;
                q.push({d[it.first], it.first});
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << d[i] << " ";
    }
    cout << endl;
}
int main(){
    Quick();
    input();
    Dijkstra(s);
    return 0;
}