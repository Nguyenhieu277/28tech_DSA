#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void LocPhat(int n){
    vector<string> v;
    queue<string> q;
    q.push("6");
    q.push("8");
    while(!q.empty()){
        string s1 = q.front();
        q.pop();
        if(s1.size() <= n){
            v.push_back(s1);
            q.push(s1 + "6");
            q.push(s1 + "8");
        }
        else break;
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    Quick();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        LocPhat(n);
    }
    return 0;
}
