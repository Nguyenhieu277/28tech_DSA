#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int binarySearch(vector<int> &v){
    int left = 0, right = v.size() - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(v[mid] == 0){
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return left;
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
    cout << binarySearch(v);
    return 0;
}