#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, m;
    cin >> n >> m;
    vector<int> v1, v2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v1.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int i = 0, j = 0;
    int cnt = 0;
    while(i < v1.size() && j < v2.size()){
        if(abs(v1[i] - v2[j]) <= 1){
            cnt++;
            i++; j++;
        }
        else if(v1[i] - v2[j] > 1){
            j++;
        }
        else if(v2[j] - v1[i] > 1){
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}