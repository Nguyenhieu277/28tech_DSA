#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int flag = 1, n, k;
void init(vector<int> &a){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}
void generate(vector<int> &a){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    quick();
    vector<int> a(k + 1);
    cin >> n >> k;
    init(a);
    while(flag){
        for(int i = 1; i <= k; i++){
            cout << a[i];
        }
        cout << endl;
        generate(a);
    }
    return 0;
}