#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
vector<int> mergeAndCount(vector<int> &v1, vector<int> &v2){
    int i = 0, j = 0;
    vector<int> res;
    while(i < v1.size() && j < v2.size()){
        if(v1[i] < v2[j]){
            i++;
        }
        else{
            res.push_back(i);
            j++;
        }
    }
    while(j < v2.size()){
        res.push_back(v1.size());
        j++;
    }
    return res;
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v1, v2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v1.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        v2.push_back(x);
    }
    vector<int> res = mergeAndCount(v1, v2);
    for(int it : res) cout << it << " ";
    cout << endl;
    return 0;
}
