#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void generate(string &s, int &flag){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '8'){
        s[i] = '0';
        --i;
    }
    if(i < 0){
        flag = 0;
    }
    else{
        s[i] = '8';
    }
}
ll a[505];
vector<ll> res;
int main(){
    quick();
    string s(19, '0');
    int flag = 1;
    generate(s, flag);
    while(flag){
        res.push_back(stoll(s));
        generate(s, flag);
    }
    for(int i = 1; i <= 300; i++){
        for(ll x : res){
            if(a[i] == 0 && x % i == 0){
                a[i] = x;
            }
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}