#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int countBDN(ll n){
    int cnt = 0;
    queue<ll> q;
    q.push(1);
    while(!q.empty()){
        ll x = q.front();
        q.pop();
        if (x < n){
            cnt++;
            q.push(x * 10);
            q.push(x * 10 + 1);
        }
    }
    return cnt;
}

int main(){
    Quick();
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << countBDN(n) << endl;
    }
    return 0;
}
