#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<char> a(1001);
char c;
int k, flag = 1;
int n = (int)c - (int)'A' + 1;
void init(){
    char x = 'A';
    for(int i = 1; i <= k; i++){
        a[i] = (char)x;
    }
}
void generate(){
    int i = k;
    while(i >= 1 && a[i] == c){
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        a[i]++;
        for(int j = i  + 1; j <= k; j++){
            a[j] = 'A';
        }
    }
}
int main(){
    quick();
    cin >> c >> k;
    init();
    while(flag){
        for(int i = 1; i <= k; i++){
            cout << (char)a[i];
        }
        cout << endl;
        generate();
    }
    return 0;
}