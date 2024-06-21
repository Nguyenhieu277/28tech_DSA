#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n;
int mark[10001];
vector<int> tmp;
vector<vector<int>> res;
void backTracking(int idx){
    if(tmp.size() == n){
        res.push_back(tmp);
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!mark[i] && (tmp.empty() || abs(i - tmp.back()) != 1)){
            mark[i] = 1;
            tmp.push_back(i);
            backTracking(idx + 1);
            tmp.pop_back();
            mark[i] = 0;
        }
    }
}
int main(){
    quick();
    cin >> n;
    backTracking(1);
    sort(res.begin(), res.end());
    for(auto it : res){
        for(int i = 0; i < it.size(); i++){
            cout << it[i];
        }
        cout << endl;
    }
    return 0;
}