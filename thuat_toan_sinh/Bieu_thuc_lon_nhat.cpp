#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> a(10001);
int n = 3, flag = 1;
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
    vector<int> v;
    for(int i = 0; i < 4; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    ll sum = LLONG_MIN;
    while(flag){
        ll ans = v[0];
        for(int i = 1; i <= n; i++){
            if(a[i] == 1) ans = ans + v[i];
            else ans = ans - v[i];
        }
        sum = max(ans, sum);
        generate();
    }
    cout << sum << endl;
    return 0;
}