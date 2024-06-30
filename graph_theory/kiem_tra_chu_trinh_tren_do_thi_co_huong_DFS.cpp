#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <vector<int>> vv;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> List[max_n];
int color[max_n];
int n, m;
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
    }
}
bool DFS(int u){
    color[u] = 1;
    for(int it : List[u]){
        if(!color[it]){
            if(DFS(it)) return true;
        }
        else if(color[it] == 1){
            return true;
        }
    }
    color[u] = 2;
    return false;
}
int main(){
    Quick();
    input();
    for(int i = 1; i <= n; i++){
        if(!color[i]){
            if(DFS(i)){
                cout << 1 << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}