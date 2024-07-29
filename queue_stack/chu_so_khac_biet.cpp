#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> v;
void init(){
    queue<int> q;
    for(int i = 1; i <= 5; i++){
        q.push(i);
    }
    while(!q.empty()){
        int x = q.front();
        q.pop();
        v.push_back(x);
        int visited[6] = {0};
        int tmp = x;
        if(tmp == 0) visited[tmp] = 1;
        else{
            while(tmp != 0){
                visited[tmp % 10] = 1;
                tmp /= 10;
            }
        }
        for(int i = 0; i <= 5; i++){
            if(visited[i] == 0){
                q.push(x * 10 + i);
            }
        }
    }
}
void solve(){
    int l, r;
    int cnt = 0;
    cin >> l >> r;
    for(int it : v){
        if(it > r) break;
        if(it >= l) cnt++;
    }
    cout << cnt << endl;
}
int main(){
    Quick();
    init();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}