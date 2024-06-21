#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n;
vector<int> a(10001);
int mark[1001] = {0};
vector<string> res;
vector<int> tmp;
void backTracking( int idx){
    if(idx == n + 1){
        if(tmp.size() >= 3){
            string s = "";
            for(int i = 1; i < tmp.size(); i++){
                s += to_string(tmp[i]) + " ";
            }
            res.push_back(s);
        }
        return;
    }
    if(!mark[idx] && tmp.back() < a[idx]){
        mark[idx] = 1;
        tmp.push_back(a[idx]);
        backTracking(idx + 1);
        tmp.pop_back();
        mark[idx] = 0;
    }
    backTracking(idx + 1);
}
int main(){
    quick();
    cin >> n;
    tmp.push_back(0);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    backTracking(1);
    sort(res.begin(), res.end());
    for(auto it : res){
        cout << it << endl;
    }
    return 0;
}
