#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n;
    cin >> n;
    cin.ignore();
    vector<pair<int, int>> List;
    for(int i = 1; i <= n; i++){
        string line;
        getline(cin, line);
        stringstream ss(line);
        string j;
        while(ss >> j){
            List.push_back({i, stoi(j)});
        }
    }
    sort(List.begin(), List.end());
    for(auto it : List){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}