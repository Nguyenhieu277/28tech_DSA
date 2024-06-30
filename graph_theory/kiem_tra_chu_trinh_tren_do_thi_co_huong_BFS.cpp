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
int visited[max_n], d[max_n];
int n, m;
void input(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        d[y]++;
    }
}
bool Kahn(){
    queue<int> q;
    for(int i = 1; i <= n; i++){
        if(d[i] == 0){
            q.push(i);
        }
    }
    vector<int> v;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        v.push_back(x);
        for(int it : List[x]){
            --d[it];
            if(d[it] == 0){
                q.push(it);
            }
        }
    }
    return v.size() != n;
}
int main(){
    Quick();
    input();
    cout << Kahn();
    return 0;
}