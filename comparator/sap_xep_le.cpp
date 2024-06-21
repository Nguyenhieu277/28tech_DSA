#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int countingOdd(int n){
    int cnt = 0;
    while(n != 0){
        int m = n % 10;
        if(m % 2 != 0){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}
bool cmp(int a, int b){
    int x = countingOdd(a), y = countingOdd(b);
    if(x != y) return x > y;
    else return a < b;
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(int it : v) cout << it << " ";
    cout << endl;
    return 0;
}
