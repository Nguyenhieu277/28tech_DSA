#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<int> intersection(vector<int> &v1, vector<int> &v2){
    int i = 0, j = 0;
    vector<int> res;
    while(i < v1.size() && j < v2.size()){
        if(v1[i] == v2[j]){
            res.push_back(v1[i]);
            i++; j++;
        }
        else if(v1[i] < v2[j]){
            i++;
        }
        else j++;
    }
    return res;
}
int main(){
    quick();
    int n, m;
    cin >> n >> m;
    vector<int> v1, v2;
    set<int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v1.push_back(x);
        se.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        v2.push_back(x);
        se.insert(x);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    vector<int> res = intersection(v1, v2);
    for(int it : res){
        cout << it << " ";
    }
    cout << endl;
    for(int it : se){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}