#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, k;
vector<int> a;
vector<vector<int>> v;
void backTracking(int idx, int sum){
    for(int j = idx; j <= 9; j++){
        a.push_back(j);
        if(a.size() == k){
            if(sum + j == n){
                v.push_back(a);
            }
        }
        else backTracking(j + 1, sum + j);
        a.pop_back();
    }
}

int main(){
    quick();
    cin >> n >> k;
    backTracking(1, 0);
    if(!v.empty()){
        for(auto it : v){
            for(int i = 0; i < it.size(); i++){
                cout << it[i];
                if(i != it.size() - 1){
                    cout << " + ";
                }
                else cout << endl;
            }
        }
    }
    else cout << "NOT FOUND" << endl;
    return 0;
}