#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

bool isIncreasing(vector<int>& arr, int start, int end) {
    for (int i = start + 1; i < end; ++i) {
        if (arr[i - 1] >= arr[i]) {
            return false;
        }
    }
    return true;
}

int main(){
    quick();
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << "NO" << endl;
        return 0;
    }
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    vector<int> tmp;
    for(int it : v){
        tmp.push_back(it);
    }
    int flag = 0, cnt = 0;
    int start = -1;
    sort(tmp.begin(), tmp.end());
   for(int i = 0; i <= n / 2; i++){
        if(v[i] == tmp[n - i - 1]){
            cnt++;
        }
        else{
            start = i + 1;
        }
    }

    reverse(v.begin() + start, v.begin() + cnt * 2);
    // for(int it : v){
    //     cout << it << " ";
    // }
    // cout << endl;
    if(isIncreasing(v, 0, n)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    // cout << (flag == 0 ? "NO" : "YES") << endl;
    return 0;
}
