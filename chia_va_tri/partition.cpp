#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<vector<int>> v;
vector<int> tmp;
int n, sum = 0;
void backTracking(int idx){
    if(sum == n){
        v.push_back(tmp);
        return;
    }
    else if(sum < n){
        for(int i = idx; i <= n; i++){
            tmp.push_back(i);
            sum += i;
            backTracking(idx);
            sum -= i;
            tmp.pop_back();
        }
    }
}
int main(){
    quick();
    cin >> n;
    backTracking(1);
    for(auto it : v){
        for(int i = 0; i < it.size(); i++){
            cout << it[i];
            if(i != it.size() - 1){
                cout << " + ";
            }
            else cout << endl;
        }
    }
    return 0;
}