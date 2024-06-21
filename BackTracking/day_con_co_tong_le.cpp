#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> a(1001);
int n;
vector<vector<int>> res;
vector<int> tmp;
// int sum = 0;
void backTracking(int idx){
    if(idx == n + 1){
        int sum = 0;
        for(int it : tmp){
            sum += it;
        }
        if(sum % 2 != 0){
            res.push_back(tmp);
        }
        return;
    }
    backTracking(idx + 1);
    tmp.push_back(a[idx]);
    backTracking(idx + 1);
    tmp.pop_back();
}
int main(){
    quick();
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    backTracking(1);
    sort(a.begin() + 1, a.begin() + n + 1);
    if(res.empty()){
        cout << "NOT FOUND" << endl;
        return 0;
    }
    else{
        sort(res.begin(), res.end());
        for(auto it : res){
            for(int i = 0; i < it.size(); i++){
                cout << it[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}