#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void arrangeChildren(vector<int> &v, int k){
    int i = 0, j = v.size() - 1, cnt = 0;
    while(i <= j){
        if(v[i] + v[j] <= k){
            cnt++;
            i++; j--;
        }
        else{
            j--;
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    arrangeChildren(v, k);
    return 0;
}