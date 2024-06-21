#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, k;
string a;
vector<string> res;
string tmp = "";
void backTracking(int idx){
    if(tmp.size() == k){
        res.push_back(tmp);
        return;
    }
    for(int i = idx; i < n; i++){
        tmp += a[i];
        backTracking(i);  
        tmp.pop_back();
    }
}
int main(){
    quick();
    cin >> n >> k;
    cin >> a;
    sort(a.begin(), a.end());
    backTracking(0);
    for(string it : res){
        cout << it << endl;
    }
    return 0;
}