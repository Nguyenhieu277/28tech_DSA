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
bool isPrime2(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}
int countingPrime(int n){
    int cnt = 0;
    while(n != 0){
        int m = n % 10;
        if(isPrime(m)){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}
bool cmp(int a, int b){
    int x = countingPrime(a);
    int y = countingPrime(b);
    return x > y;
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(int i : v){
        cout << i << " ";
    }
    return 0;
}
