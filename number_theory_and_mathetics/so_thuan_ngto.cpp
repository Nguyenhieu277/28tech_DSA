#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

//Hàm kiểm tra số nguyên tố
bool isPrime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i <= sqrt(n); i += 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
//Hàm tổng chữ số nguyên tố và các chữ số là số nguyên tố, check luôn 2 yêu cầu này trong cùng 1 hàm vì nó đều tách từng chữ số
bool isDigitsPrime(int n){
    int sum = 0;
    while(n != 0){
        int m = n % 10;
        if(!isPrime(m)){
            return false;
        }
        sum += m;
        n /= 10;
    }
    return isPrime(sum);
}

int main(){
    quick();
    int a, b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(isDigitsPrime(i) && isPrime(i)){
            ++dem;
        }
    }
    cout << dem << endl;
}
