#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void solve(){
    int s, t;
    cin >> s >> t;
    if(s >= t){
        cout << s - t << endl;
        return;
    }
    queue<pair<int, int>> q;
    q.push({s, 0});
    set<int> se; // save used datas
    se.insert(s);
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        if(it.first == t){
            cout << it.second << endl;
            return;
        }
        if(it.first * 2 <= t * 2 && se.find(it.first * 2) == se.end()){
            se.insert(it.first * 2);
            q.push({it.first * 2, it.second + 1});
        }
        if(it.first - 1 > 0 && se.find(it.first - 1) == se.end()){
            se.insert(it.first - 1);
            q.push({it.first - 1, it.second + 1});
        }
    }
    cout << -1 << endl;
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