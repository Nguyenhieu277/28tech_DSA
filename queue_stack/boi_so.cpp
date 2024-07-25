#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void findSmallestMultiple(int n){
    queue<string> q;
    set<int> se;
    q.push("8");
    int flag = 0;
    while(!q.empty()){
        string s = q.front();
        q.pop();
        int remainder = 0;
        for(int i = 0; i < s.size(); i++){
            remainder = (remainder * 10 + s[i] - '0') % n;
        }
        if(remainder == 0){
            cout << s << endl;
            flag = 1;
            break;
        }
        if(se.find(remainder) == se.end()){
            se.insert(remainder);
            q.push(s + "0");
            q.push(s + "8");
        }
    }
    if(!flag){
        cout << -1 << endl;
    }
}
int main(){
    Quick();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        findSmallestMultiple(n);
    }
    return 0;
}