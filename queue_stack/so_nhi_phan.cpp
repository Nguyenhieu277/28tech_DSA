#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void BinaryNumber(int n){
    vector<string> v;
    queue<string> q;
    q.push("1");
    for(int i = 0; i < n; i++){
        string s1 = q.front();
        q.pop();
        cout << s1 << " ";
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
    cout << endl;
}
int main(){
    Quick();
    int n;
    cin >> n;
    BinaryNumber(n);
    return 0;
}