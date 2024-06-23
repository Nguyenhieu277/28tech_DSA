#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n;
    cin >> n;
    vector<vector<int>> v(n + 1);
    cin.ignore();
    for(int i = 1; i <= n; i++){
        string line;
        getline(cin, line);
        stringstream ss(line);
        string word;
        while(ss >> word){
            if(stoi(word) > i){
                cout << i << " " << word << endl;
            }
        }
    }
    return 0;
}