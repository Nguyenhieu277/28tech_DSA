#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int counting_even_digit(int n){
    int cnt = 0;
    while(n != 0){
        int m = n % 10;
        if(m % 2 == 0){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}
int counting_odd_digit(int n){
    int cnt = 0;
    while(n != 0){
        int m = n % 10;
        if(m % 2 == 1){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}
bool cmp1(int a, int b){
    int amount1 = counting_even_digit(a);
    int amount2 = counting_even_digit(b);
    if(amount1 != amount2) return amount1 < amount2;
    else return a < b;
}
bool cmp2(int a, int b){
    int amount1 = counting_odd_digit(a);
    int amount2 = counting_odd_digit(b);
    return amount1 < amount2;
}
int main(){
    int n;
    cin >> n;
    vector<int> v1, v2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end(), cmp1);
    for(int it : v1) cout << it << " ";
    cout << endl;
    stable_sort(v2.begin(), v2.end(), cmp2);
    for(int it : v2) cout << it << " ";
    cout << endl;
    return 0;
}
