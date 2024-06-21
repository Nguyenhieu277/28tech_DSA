#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int a[1001];
int n, flag = 1;
void init(){
    int x = n;
    for(int i = 1; i <= n; i++){
        a[i] = x--;
    }
}
void generate(){
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
        reverse(a + i + 1, a + n + 1);
    }
}
vector<int> v;
int main(){
    quick();
    cin >> n;
    set<int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    for(int it : se){
        v.push_back(it);
    }
    n = v.size();
    init();
    while(flag){
        for(int i = 1; i <= n; i++){
            cout << v[a[i] - 1] << " "; 
        }
        cout << endl;
        generate();
    }
    return 0;
}