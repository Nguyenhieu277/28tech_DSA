#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n;
void init(vector<int> &a){
    for(int i = 1; i <= n / 2; i++){
        a[i] = 0;
    }
}
void generate(vector<int> &a, int &flag){
    int i = n / 2;
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
    int max_n, flag = 1;
    cin >> max_n;
    vector<int> a(10001);
    init(a);
    vector<string> v;
    for(n = 2; n <= max_n; n += 2){
        flag = 1;
        while(flag){
            string tmp = "";
            for(int i = 1; i <= n / 2; i++){
                tmp += to_string(a[i]);
            }
            for(int i = n / 2; i >= 1; i--){
                tmp += to_string(a[i]);
            }
            v.push_back(tmp);
            generate(a, flag);
        }
    }
    sort(v.begin(), v.end());
    for(auto it : v){
        cout << it << endl;
    }
    return 0;
}