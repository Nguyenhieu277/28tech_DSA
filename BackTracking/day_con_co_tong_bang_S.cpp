#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, k;
vector<int> a;
void backTracking(vector<int> &v, int idx, int sum){
    if(sum == k){
        cout << "[";
        for(int i = 0; i < v.size(); i++){
            cout << v[i];
            if(i != v.size() - 1){
                cout << " ";
            }
            else cout << "]";
        }
        cout << endl;
    }
    else if(sum < k){
        for(int i = idx; i < n; i++){
            v.push_back(a[i]);
            backTracking(v, i + 1, sum + a[i]);
            // sum -= a[i];
            v.pop_back();
        }
    }
}
int main(){
    quick();
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    backTracking(v, 0, 0);
    return 0;
}