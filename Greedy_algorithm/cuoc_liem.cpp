#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int coin, diamond;
    cin >> coin >> diamond;
    if(coin < diamond) swap(coin, diamond);
    int operation = coin - diamond;
    if(operation > diamond){
        cout << diamond << endl;
        return 0;
    }
    else{
        int total = operation;
        int tmp = diamond - operation;
        total += (tmp / 3) * 2;
        if(tmp % 3 == 2){
            total++;
        }
        cout << total;
    }
    return 0;
}