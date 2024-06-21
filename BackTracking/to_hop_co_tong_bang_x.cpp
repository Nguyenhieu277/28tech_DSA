#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, x;
vector<int> a(10001);
vector<vector<int>> res;
vector<int> tmp;
void backTracking(int idx, int sum){
    if(sum == x){
        res.push_back(tmp);
        return;
    }
    else if (sum > x) {
        return;
    }
    else if(sum < x){
        for(int i = idx; i <= n; i++){
            tmp.push_back(a[i]);
            backTracking(i, sum + a[i]);
            tmp.pop_back();
        }
    }
}
int main(){
    quick();
    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a.begin() + 1, a.begin() + n + 1);
    backTracking(1, 0);
    if(res.empty()){
        cout << -1 << endl;
    }
    else{
        cout << res.size() << endl;
        for(auto it : res){
            cout << "{";
            for(int i = 0; i < it.size(); i++){
                cout << it[i];
                if(i != it.size() - 1) cout << " ";
            }
            cout  << "}" << endl;
        }
    }
    return 0;
}