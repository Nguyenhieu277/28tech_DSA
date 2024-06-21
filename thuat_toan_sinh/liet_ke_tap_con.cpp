#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void init(vector<int> &a, int n){
    for(int i = 0; i < n; i++){
        a[i] = i + 1;
    }
}
void generate(vector<int> &a, int n){
    vector<string> v;
    for(int i = 0; i < (1 << n); i++){
        string tmp = "";
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
               tmp += to_string(a[j]);
            }
        }
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for(auto it : v){
        for(int i = 0; i < it.size(); i++){
            cout << it[i] << " ";
        }
        cout << endl;
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<int> a(n + 1);
    init(a, n);
    generate(a, n);
    return 0;
}