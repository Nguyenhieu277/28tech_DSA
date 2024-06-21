#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void selectDoubleToDance(vector<int> &v1, vector<int> &v2){
    int i = 0, j = 0;
    int cnt = 0;
    while(i < v1.size() && j < v2.size()){
        if(v1[i] <= v2[j]){
            i++;
        }
        else{
            cnt++;
            i++;
            j++;
        }
    }
    cout << cnt << endl;
}
int main(){
    quick();
    int n, m;
    cin >> n >> m;
    vector<int> b, c;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        c.push_back(x);
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    selectDoubleToDance(b, c);
    return 0;
}