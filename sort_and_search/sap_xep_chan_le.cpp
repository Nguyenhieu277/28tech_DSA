#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


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
    int left = 0, right = v.size() - 1;
    while(left < right){
        cout << v[left] << " " << v[right] << " ";
        left++; right--;
    }
    if(n % 2 != 0){
        cout << v[left] << " ";
    }
    cout << endl;
    return 0;
}