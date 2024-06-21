#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

vector<char> a(1001);
char c;
int flag = 1;
int n = (int)c - (int)'A' + 1; 
bool isVowel(char x){
    return x == 'A' || x == 'E';
}
void init(){
    n = (int)c - (int)'A' + 1;
    char tmp = 'A';
    for(int i = 1; i <= n; i++){
        a[i] = (char)tmp++;
    }
}
void generate(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.begin() + n + 1);
    }
}
int main(){
    quick();
    cin >> c;
    init();
    while(flag){
        int alert = 0;
        for(int i = 2; i <= n - 1; i++){
            if(isVowel(a[i]) && !isVowel(a[i + 1]) && !isVowel(a[i - 1])){
                alert = 1;
                break;
            }
        }
        if(!alert){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << endl;
        }
        generate();
    }
    return 0;
}