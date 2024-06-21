#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void generate(vector<int> &v, int n){
    int i = n - 1;
    while(i >= 0 && v[i] > v[i + 1]){
        --i;
    }
    if(i >= 0){
        int j = n - 1;
        while(v[i] > v[j]) --j;
        swap(v[i], v[j]);
        reverse(v.begin() + i + 1, v.begin() + n);
    }
    else{
        for(int i = 0; i < n; i++){
            v[i] = i + 1;
        }
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    generate(v, n);
    return 0;
}