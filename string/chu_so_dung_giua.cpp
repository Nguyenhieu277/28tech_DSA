#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/
int main(){
    string s;
    cin >> s;
    if(s.size() % 2 == 0){
        cout << "NOT FOUND" << endl;
    }
    else{
        cout << s[s.size() / 2] << endl;
    }
    return 0;
}
