#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

string solvePlus(string a, string b){
    if(a.size() < b.size()) swap(a, b);
    while(a.size() > b.size()){
        b.insert(0, "0");
    }
    string res = "";
    int nho = 0;
    for(int i = a.size() - 1; i >= 0; i--){
        int tmp = a[i] - '0' + b[i] - '0' + nho;
        res += to_string(tmp % 10);
        nho = tmp /= 10;
    }
    if(nho > 0) res += to_string(nho);
    reverse(res.begin(), res.end());
    return res;
}
string changeFiveToSix(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '5'){
            s[i] = '6';
        }
    }
    return s;
}
string changeSixToFive(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '6'){
            s[i] = '5';
        }
    }
    return s;
}
int main(){
    quick();
    string a, b;
    cin >> a >> b;
    string s1, s2;
    string s3, s4;
    s1 = changeFiveToSix(a);
    s2 = changeFiveToSix(b);
    s3 = changeSixToFive(a);
    s4 = changeSixToFive(b);
    cout << solvePlus(s1, s2) << " " << solvePlus(s3, s4) << endl;
    return 0;
}