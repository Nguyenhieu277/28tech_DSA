#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void init(vector<int> &a, int n){
    for(int i = 1; i <= n; i++){
        a[i] = 6;
    }
}
void generate(vector<int> &a, int n, int &flag){
    int i = n;
    while(i >= 1 && a[i] == 8){
        a[i] = 6;
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        a[i] = 8;
    }
}
bool check1(vector<int> &a, int n){
    if(a[1] == 8 && a[n] == 6){
        return true;
    }
    else return false;
}
bool check2(vector<int> &a, int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 8){
            cnt++;
            if(cnt > 1) return false;
        }
        else{
            cnt = 0;
        }
    }
    return cnt <= 1;
}
bool check3(vector<int> &a, int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 6){
            cnt++;
        }
        else{
            if(cnt > 3){
                return false;
            }
            cnt = 0;
        }
    }
    return cnt <= 3;
}

int main(){
    quick();
    int n, flag = 1;
    cin >> n;
    vector<int> a(n + 1);
    init(a, n);
    while(flag){
        if(check1(a, n) && check2(a, n) && check3(a, n)){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << endl;
        }
        generate(a, n, flag);
    }
    return 0;
}