#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isPalindromic(vector<int> &a, int n){
    for(int i = 0; i < n / 2; i++){
        if(a[i] != a[n - i - 1]){
            return false;
        }
    }
    return true;
}
void init(vector<int> &a, int n){
    for(int i = 0; i < n; i++){
        a[i] = 0;
    }
}
void generate(vector<int> &a, int n, int &flag){
    int i = n - 1;
    while(i >= 0 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i < 0){
        flag = 0;
    }
    else{
        a[i] = 1;
    }
}
int main(){
    quick();
    int n, flag = 1;
    cin >> n;
    vector<int> a(n + 1);
    init(a, n);
    while(flag){
        if(isPalindromic(a, n)){
            for(int i = 0; i < n; i++){
                cout << a[i];
            }
            cout << endl;
        }
        generate(a, n, flag);
    }
    return 0;
}