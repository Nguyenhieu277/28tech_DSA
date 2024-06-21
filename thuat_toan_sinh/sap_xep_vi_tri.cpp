#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxPermutation = 3628800;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void generate(vector<string> &a, int n, int &flag){
    int i = n - 1;
    flag = 1;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.begin() + n + 1);
    }
}
int main(){
    quick();
    int n, flag = 1;
    cin >> n;
    vector<string> a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    // int cnt = 0;
    stable_sort(a.begin(), a.end());
    while(flag){
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        generate(a, n, flag);
        cnt++;
    }
    return 0;
}