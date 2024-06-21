#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isPrime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i <= sqrt(n); i += 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
void goldbach(int n){
    vector<pair<int, int>> v;
    for(int i = 2; i <= n / 2; i++){
        if(isPrime(i) && isPrime(n - i)){
            v.push_back({i, n - i});
        }
    }
    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        goldbach(n);
    }
    return 0;
}
