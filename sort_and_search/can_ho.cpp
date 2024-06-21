#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void selectApartment(vector<int> &v1, vector<int> &v2, int k){
    int i = 0, j = 0, cnt = 0; 
    while(i < v1.size() && j < v2.size()){
        if(abs(v1[i] - v2[j]) <= k){
            cnt++;
            i++;
            j++;
        }
        else if(v1[i] > v2[j]){
            j++;
        }
        else i++;
    }
    cout << cnt << endl;
}
int main(){
    quick();
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v1;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v1.push_back(x);
    }
    vector<int> v2;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    selectApartment(v1, v2, k);
    return 0;
}