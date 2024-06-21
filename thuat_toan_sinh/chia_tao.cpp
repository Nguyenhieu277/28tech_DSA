#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, k, flag = 1, a[10001];
void init(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void generate(){
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
int main(){
    quick();
    cin >> n;
    int b[10001];
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    ll ans = LLONG_MAX;
    init();
    while(flag){
        ll s1 = 0, s2 = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] == 1) s1 += b[i];
            else s2 += b[i];
        }
        ans = min(ans, abs(s1 - s2));
        generate();
    }
    cout << ans << endl;
    return 0;
}