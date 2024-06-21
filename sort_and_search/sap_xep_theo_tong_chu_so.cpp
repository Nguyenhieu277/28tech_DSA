#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int sumOfDigits(int n){
    int sum = 0;
    while(n != 0){
        int m = n % 10;
        sum += m;
        n /= 10;
    }
    return sum;
}
bool cmp(int a, int b){
    if(sumOfDigits(a) != sumOfDigits(b)){
        return sumOfDigits(a) < sumOfDigits(b);
    }
    else return a < b;
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(int it : v) cout << it << " ";
    cout << endl;
    return 0;
}