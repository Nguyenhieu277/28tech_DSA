#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int k, n, m;
vector<int> List[max_n];
int visited[max_n];
map<int, int> mp;
vector<int> people;
void input(){
    cin >> k >> n >> m;
    for(int i = 0; i < k; i++){
        int x; cin >> x;
        people.push_back(x);
    }
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
    }
}
void DFS(int u){
    visited[u] = 1;
    mp[u]++;
    for(int it : List[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
}
int main(){
    Quick();
    input();
    for(int it : people){
        memset(visited, 0, sizeof(visited));
        DFS(it);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(mp[i] == k){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}