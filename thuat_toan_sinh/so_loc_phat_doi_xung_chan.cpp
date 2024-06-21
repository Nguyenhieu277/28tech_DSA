#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n;
void init(vector<int> &a){
    for(int i = 1; i <= n / 2; i++){
        a[i] = 0;
    }
}
void generate(vector<int> &a, int &flag){
    int i = n / 2;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        a[i] = 1;
    }
}
bool cmp(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    else return a < b;
}
int main(){
    quick();
    int max_n, flag = 1;
    cin >> max_n;
    vector<int> a(10001);
    init(a);
    vector<string> v;
    for(n = 2;; n += 2){
        flag = 1;
        int cnt = 0;
        while(flag){
            string tmp = "";
            if(cnt == max_n) break;
            for(int i = 1; i <= n / 2; i++){
                int temp;
                if(a[i] == 1) temp = 8;
                else temp = 6;
                tmp += to_string(temp);
            }
            for(int i = n / 2; i >= 1; i--){
                int temp;
                if(a[i] == 1) temp = 8;
                else temp = 6;
                tmp += to_string(temp);
            }
            cnt++;
            v.push_back(tmp);
            generate(a, flag);
        }
        if(cnt == max_n) break;
    }
    sort(v.begin(), v.end(), cmp);
    int count = 0;
    for(auto it : v){
        if(count == max_n) break;
        cout << it << " ";
        count++;
    }
    cout << endl;
    // cout << count << endl;
    return 0;
}