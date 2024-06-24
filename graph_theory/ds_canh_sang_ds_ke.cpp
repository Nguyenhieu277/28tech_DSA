#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> List[max_n];
int n, m;
int main(){
    quick();
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        cout << i << " : ";
        sort(List[i].begin(), List[i].end());
        for(int it : List[i]){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}