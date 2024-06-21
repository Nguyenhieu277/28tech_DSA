#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

ll f[100];
void init(){
    f[1] = 1;
    f[2] = 1;
    f[3] = 2;
    for(int i = 4; i <= 61; i++){
        f[i] = f[i - 3] + f[i - 2] + f[i - 1];
    }
}
char findWord(ll n, ll k){
    if(n == 1) return 'a';
    if(n == 2){
        return 'b';
    }
    if(n == 3){
        if(k == 1) return 'c';
        else if(k == 2) return 'd';
    }
    if(k <= f[n - 3]){
        return findWord(n - 3, k);
    }
    else if(k <= f[n - 2] + f[n - 3]){
        return findWord(n - 2, k - (f[n - 3]));
    }
    else return findWord(n - 1, k - ((f[n - 2]) + (f[n - 3])));
}

int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        ll n;
        ll k;
        init();
        cin >> n >> k;
        char x = findWord(n, k);
        string tmp = "";
        if(x == 'a'){
            tmp = "28tech";
        }
        else if(x == 'b'){
            tmp = "C++";
        }
        else if(x == 'c'){
            tmp = "DSA";
        }
        else if(x == 'd'){
            tmp = "JAVA";
        }
        cout << tmp << endl;
    }
    return 0;
}
