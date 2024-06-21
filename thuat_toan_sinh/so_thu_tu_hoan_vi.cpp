#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, flag = 1;

void generate(vector<int> &a){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.begin() + n + 1);
    }
}
int main(){
    quick();
    cin >> n;
    ll temp = 0; 
    vector<int> v1(n + 1), a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> v1[i];
    }
    for(int i = 1; i <= n; i++){
        temp = temp * 10 + v1[i];
    }
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
    int cnt = 1;
    vector<ll> v;
    while(flag){
        ll tmp = 0;
        for(int i = 1; i <= n; i++){
            tmp = tmp * 10 + a[i];
        }
        generate(a);
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size(); i++){
        if(temp == v[i]){
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}