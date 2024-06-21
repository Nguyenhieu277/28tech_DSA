#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
int n, x;
bool cmp1(int a, int b){
    int abs1 = abs(a - x);
    int abs2 = abs(b - x);
    if(abs1 != abs2) return abs1 < abs2;
    else return a < b;
}
bool cmp2(int a, int b){
    if(a % 2 == 0 && b % 2 == 0){
        return a < b;
    }
    else if(a % 2 == 0){
        return true;
    }
    else if(b % 2 == 0){
        return false;
    }
    else return a > b;
}
int main(){
    cin >> n >> x;
    vector<int> v1, v2;
    for(int i = 0; i < n; i++){
        int digit; cin >> digit;
        v1.push_back(digit);
        v2.push_back(digit);
    }
    sort(v1.begin(), v1.end(), cmp1);
    for(auto it : v1) cout << it << " ";
    cout << endl;
    stable_sort(v2.begin(), v2.end(), cmp2);
    for(auto it : v2) cout << it << " ";
    cout << endl;
    return 0;
}
