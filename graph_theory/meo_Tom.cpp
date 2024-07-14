#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m, res = 0;
vector<int> List[max_n];
vector<int> v(max_n);
void input(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(int i = 1; i < n; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
    }
}  
void DFS(int u, int cnt){
    if(cnt > m) return;
    for(int it : List[u]){
        if(v[it] == 1){
            DFS(it, cnt + 1);
        }
        else{
            DFS(it, 0);
        }
    }
    if(List[u].size() == 0){
        res++;
    }
}
int main(){
    Quick();
    input();
    DFS(1, v[1]);
    cout << res << endl;
    return 0;
}