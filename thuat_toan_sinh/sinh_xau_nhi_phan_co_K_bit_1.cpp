#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void init(vector<ll> &a, int n){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void generate(vector<ll> &a, int n, int k, int &flag){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        a[i] = 1;
    }
}
bool check1(vector<ll> &a, int n, int k){
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += a[i];
    }
    return ans == k;
}
bool check2(vector<ll> &a, int n, int k){
    int count = 0, ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] == 1) {
            count++;
            if (count > k) {
                return false;
            } 
        } else {
            if (count == k) {
                ans++;
            }      
            count = 0;
        }
    }
    if (count == k) {
        ans++;
    }
    if(ans == 1) return true;
    else return false;
}

int main(){
    quick();
    int n, k, flag = 1;
    cin >> n >> k;
    vector<ll> a(n + 1), b(n + 1);
    init(a, n);
    init(b, n);
    while(flag){
        if(check1(a, n, k)){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << " ";
        }
        generate(a, n, k, flag);
    }
    cout << endl;
    flag = 1;
    while(flag){
        if(check2(b, n, k)){
            for(int i = 1; i <= n; i++){
                cout << b[i];
            }
            cout << " ";
        }
        generate(b, n, k, flag);
    }
    cout << endl;
    return 0;
}