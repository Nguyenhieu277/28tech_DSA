#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool binarySearch(vector<int> &v, int n, int x){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(v[mid] == x) return true;
        else if(v[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return false;
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
    sort(v.begin(), v.end());
    int query;
    cin >> query;
    while(query--){
        int x;
        cin >> x;
        if(binarySearch(v, n, x)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}