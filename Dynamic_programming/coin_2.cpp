#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, S = 0;
    cin >> n >> S;
    int c[n];
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    int F[S + 1] = {0};
    //F[i] : số lượng đồng xu nhỏ nhất để tạo nên lượng tiền là i
    F[0] = 1;
    int mod = 1e9 + 7;
    for(int i = 1; i <= S; i++){
        F[i] = 0;
        for(int coin : c){
            if(i >= coin){
                F[i] += F[i - coin];
                F[i] %= mod;
            }
        }
    }
    cout << F[S] << endl;
}