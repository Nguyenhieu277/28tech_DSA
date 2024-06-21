#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void merge(vector<int> &b, vector<int> &c){
    int i = 0, j = 0;
    while(i < b.size() && j < c.size()){
        if(b[i] <= c[j]){
            cout << "b" << i + 1 << " ";
            i++;
        }
        else{
            cout << "c" << j + 1 << " ";
            j++;
        }
    }
    while(i < b.size()){
        cout << "b" << i + 1 << " ";
        i++;
    }
    while(j < c.size()){
        cout << "c" << j + 1 << " ";
        j++;
    }
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
    merge(b, c);
    return 0;
}