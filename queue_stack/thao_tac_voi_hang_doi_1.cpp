#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    Quick();
    int query;
    cin >> query;
    queue<int> q;
    while(query--){
        int n;
        cin >> n;
        if(n == 1){
            cout << q.size() << endl;
        }
        else if(n == 2){
            if(q.empty()){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else if(n == 3){
            int x; cin >> x;
            q.push(x);
        }
        else if(n == 4){
            if(!q.empty()){
                q.pop();
            }
            else continue;
        }
        else if(n == 5){
            if(!q.empty()){
                cout << q.front() << endl;
            }
            else cout << -1 << endl;
        }
        else if(n == 6){
            if(!q.empty()){
                cout << q.back() << endl;
            }
            else cout << -1 << endl;
        }
    }
    return 0;
}