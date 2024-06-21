#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void generate(vector<int> &v, int n, int k){
    int i = k - 1;
    while(i >= 0 && v[i] == n - k + i + 1){
        --i;
    }
    if(i >= 0){
        v[i]++;
        for(int j = i + 1; j < k; j++){
            v[j] = v[j - 1] + 1;
        }
    }
    else{
        for(int j = 0; j < k; j++){
            v[j] = j + 1;
        }
    }
    for(int j = 0; j < v.size(); j++){
        cout << v[j] << " ";
    }
    cout << endl;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < k; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    generate(v, n, k);
    return 0;
}