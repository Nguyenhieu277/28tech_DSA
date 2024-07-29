#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
const int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
const int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int visited[max_n][max_n];
int BFS(int u, int v, int s, int t){
    queue<piii> q;
    visited[u][v] = 1;
    q.push({{u, v}, 0});
    while(!q.empty()){
        piii x = q.front();
        q.pop();
        int x1 = x.first.first, x2 = x.first.second;
        int step = x.second;
        if(x1 == s && x2 == t){
            return step;
        }
        for(int i = 0; i < 8; i++){
            int xi = x1 + dx[i];
            int yi = x2 + dy[i];
            if(xi >= 1 && xi <= 8 && yi >= 1 && yi <= 8 && !visited[xi][yi]){
                q.push({{xi, yi}, step + 1});
                visited[xi][yi] = 1;
            }
        }
    }
    return -1;
}
map<char, int> mp;
void solve(){
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;
    mp['d'] = 4;
    mp['e'] = 5;
    mp['f'] = 6;
    mp['g'] = 7;
    mp['h'] = 8;
    string start, end;
    cin >> start >> end;
    int u = mp[start[0]], v = start[1] - '0';
    int s = mp[end[0]], t = end[1] - '0';
    memset(visited, 0, sizeof(visited));
    cout << BFS(u, v, s, t) << endl;
}
int main(){
    Quick();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}