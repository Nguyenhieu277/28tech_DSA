#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <vector<int>> vv;
const int mod = 1000000007;
#define max_n 1000001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int a[max_n], BIT[max_n], n;
void update(int pos, int val){
    for(;pos <= n; pos += pos & (-pos)){
        BIT[pos] += val;
    }
}
int query(int pos){
    int sum = 0;
    for(; pos > 0; pos -= pos & (-pos)){
        sum += BIT[pos];
    }
    return sum;
}
int main(){
    Quick();
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        update(i, a[i]);
    }
    cout << query(5) - query(1) << endl;
    return 0;
}