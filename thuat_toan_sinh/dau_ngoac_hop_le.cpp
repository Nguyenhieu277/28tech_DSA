#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


bool isValid(string s){
    int cnt = 0;
    for(char it : s){
        if(it == '('){
            cnt++;
        }
        else cnt--;
        if(cnt < 0) return false;
    }
    return cnt == 0;
}
vector<string> a;
int n, flag = 1;
int main(){
    quick();
    cin >> n;
    if (n % 2 != 0) {
        cout << "NOT FOUND" << endl;
        return 0;
    }
    for(int i = 0; i < (1 << n); i++){
        string s = "";
        for(int j = n - 1; j >= 0; j--){
            if(i & (1 << j)){
                s += ')';
            }
            else s += '(';
        }
        if(isValid(s)){
            a.push_back(s);
        }
    }
    if (a.empty()) {
        cout << "NOT FOUND" << endl;
    } else {
        sort(a.begin(), a.end());
        for (auto s : a) {
            cout << s << endl;
        }
    }

    return 0;
}