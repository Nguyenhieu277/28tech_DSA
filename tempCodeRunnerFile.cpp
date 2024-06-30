#include <bits/stdc++.h>
using namespace std;

int spp(int x){
    int res = 0;
    while(x != 0){
        res = res * 10 + x % 10;
        x /= 10;
    }
    return res;
}
int main() {
    int N;
    cin >> N;
    cout << spp(N) << endl;
    return 0;
}
