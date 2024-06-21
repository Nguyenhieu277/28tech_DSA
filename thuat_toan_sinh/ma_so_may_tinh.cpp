#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, flag = 1, alert = 1;
vector<int> number(1001);
vector<char> letter(1001);
void init1(){
    char tmp = 'A';
    for(int i = 1; i <= n; i++){
        letter[i] = tmp++;
    }
}
void init2(){
    for(int i = 1; i <= n; i++){
        number[i] = 1;
    }
}
void generate1(){
    int i = n - 1;
    while(i >= 1 && letter[i] > letter[i + 1]){
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        int j = n;
        while(letter[i] > letter[j]) --j;
        swap(letter[i], letter[j]);
        reverse(letter.begin() + i + 1, letter.begin() + n + 1);
    }
}
void generate(){
    int i = n;
    while(i >= 1 && number[i] == n){
        --i;
    }
    if(i == 0){
        alert = 0;
    }
    else{
        number[i]++;
        for(int j = i + 1; j <= n; j++){
            number[j] = 1;
        }
    }
}
int main(){
    quick();
    cin >> n;
    init1();
    while(flag){
        alert = 1;
        init2();
        while(alert){
            for(int i = 1; i <= n; i++){
                cout << letter[i];
            }
            for(int i = 1; i <= n; i++){
                cout << number[i];
            }
            generate();
            cout << endl;
        }
        generate1();
    }
    return 0;
}