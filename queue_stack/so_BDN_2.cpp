#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int solve(string s, int n){
    int remainder = 0;
    for(int i = 0; i < s.size(); i++){
        remainder = (remainder * 10 + s[i] - '0') % n;
    }
    return remainder;
}
string findBDN(int n){
    queue<string> q;
    set<int> se;
    q.push("1");
    while(!q.empty()){
        string s1 = q.front();
        q.pop();
        int remainder = solve(s1, n);
        if(remainder == 0){
            return s1;
        }
        string s2 = s1;
        int r1 = solve(s1 + "0", n);
        int r2 = solve(s2 + "1", n);
        if(se.find(r1) == se.end()){
            se.insert(r1);
            q.push(s1 + "0");
        }
        if(se.find(r2) == se.end()){
            se.insert(r2);
            q.push(s2 + "1");
        }
    }
    return "-1";
}
int main(){
    Quick();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << findBDN(n) << endl;
    }
    return 0;
}