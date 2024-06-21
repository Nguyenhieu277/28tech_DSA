#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, k, s;
int cnt = 0;
void backTracking(vector<int> &v, int idx, int sum){
    if(v.size() == k){
        if(sum == s){
            cnt++;
        }
        return;
    }
    else{
        for(int i = idx; i <= n; i++){
            v.push_back(i);
            backTracking(v, i + 1, sum + i);
            v.pop_back();
        }
    }
}
int main(){
    quick();
    cin >> n >> k >> s;
    vector<int> v;
    backTracking(v, 1, 0);
    cout << cnt << endl;
    return 0;
}