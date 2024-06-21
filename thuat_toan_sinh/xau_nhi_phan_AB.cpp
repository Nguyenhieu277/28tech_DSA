#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int flag = 1, n;
vector<char> a(n + 2);
void init(){
    for(int i = 1; i <= n; i++){
        a[i] = 'A';
    }
}
void generate(){
    int i = n;
    while(i >= 1 && a[i] == 'B'){
        a[i] = 'A';
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        a[i] = 'B';
    }
}
int main(){
    quick();
    cin >> n;
    vector<string> v;
    init();
    while(flag){
        string s = "";
        for(int i = 1; i <= n; i++){
            s += a[i];
        }
        v.push_back(s);
        generate();
    }
    sort(v.begin(), v.end(), greater<string>());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}