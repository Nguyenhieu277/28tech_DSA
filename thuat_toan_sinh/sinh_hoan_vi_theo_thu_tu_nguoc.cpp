#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, flag = 1;
void init(vector<int> &a){
    for(int i = 1; i <= n; i++){
        a[i] = n - i + 1;
    }
}
void generate(vector<int> &a){
    int i = n - 1;
    while(i >= 1 && a[i] < a[i + 1]){
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        int j = n;
        while(a[i] < a[j]) --j;
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.begin() + n + 1);
    }
}
int main(){
    quick();
    cin >> n;
    vector<int> a(n + 1);
    init(a);
    while(flag){
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
        generate(a);
    }
    return 0;
} 