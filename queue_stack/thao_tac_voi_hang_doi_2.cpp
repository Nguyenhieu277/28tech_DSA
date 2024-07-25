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
    int t;
    cin >> t;
    queue<int> q;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            q.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty()){
                cout << q.front() << endl;
            }
            else cout << "NONE" << endl;
        }
        else if(s == "POP"){
            if(!q.empty()){
                q.pop();
            }
            else continue;
        }
    }
    return 0;
}