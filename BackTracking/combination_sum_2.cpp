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
bool isPrime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i <= sqrt(n); i += 6){
        if(n % i == 0 || n %(i + 2) == 0){
            return false;
        }
    }
    return true;
}
void backTracking(int idx, int sum){
    for(int j = idx; j <= n; j++){
        if(isPrime(j)){
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