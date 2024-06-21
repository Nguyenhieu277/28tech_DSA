#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/
set<int> se;
void generate(vector<int> &a, int n, int k){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if(i == 0){
        cout << k << endl;
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
        int cnt = 0;
        for(int i = 1; i <= k; i++){
            if(se.find(a[i]) == se.end()){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}   

int main(){
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> a(k + 1);
    for(int i = 1; i <= k; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    generate(a, n, k);
    return 0;
}