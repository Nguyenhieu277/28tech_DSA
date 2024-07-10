#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m;
vector<int> List[MAX];
int visited[MAX];
vector<int> components[MAX];
int cnt = 0;
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
}
void DFS(int u){
    visited[u] = 1;
    for(auto it : List[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
}
void buildingRoads(){
    vector<int> roads;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS(i);
            roads.push_back(i);
        }
    }
    cout << roads.size() - 1 << endl;
    for(int i = 0; i < roads.size() - 1; i++){
        cout << roads[i] << " " << roads[i + 1] << endl;
    }
}
int main(){
    Quick();
    input();
    buildingRoads();
    return 0;
}