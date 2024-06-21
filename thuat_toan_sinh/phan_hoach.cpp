#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void init(vector<int> &a, int &flag, int n, int &cnt){
    cnt = 1;
    a[1] = n;
}
void generate(vector<int> &a, int &flag, int n, int &cnt){
    int i = cnt;
    while(i >= 1 && a[i] == 1){
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        a[i]--;
        int tmp = cnt - i + 1;
        cnt = i;
        int q = tmp / a[i];
        int r = tmp % a[i];
        if(q != 0){
            for(int j = 1; j <= q; j++){
                ++cnt;
                a[cnt] = a[i];
            }
        }
        if(r != 0){
            ++cnt;
            a[cnt] = r;
        }
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    int flag = 1, cnt1, cnt2;
    init(a, flag, n, cnt1);
    init(b, flag, n, cnt2);
    int count = 0;
    while(flag){
        count++;
        generate(a, flag, n, cnt1);
    }
    cout << count << endl;
    flag = 1;
    while(flag){
        for(int i = 1; i <= cnt2; i++){
            cout << b[i];
            if(i != cnt2){
                cout << "+";
            }
        }
        cout << endl;
        generate(b, flag, n, cnt2);
    }
    return 0;
}