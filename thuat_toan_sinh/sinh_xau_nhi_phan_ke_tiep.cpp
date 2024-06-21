#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void generation(string &s){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        --i;
    }
    if(i >= 0){
        s[i] = '1';
    }
    else{
        for(int j = 0; j < s.size(); j++){
            s[j] = '0';
        }
    }
    cout << s << endl;
}
int main(){
    quick();
    string s;
    cin >> s;
    generation(s);
    return 0;
}