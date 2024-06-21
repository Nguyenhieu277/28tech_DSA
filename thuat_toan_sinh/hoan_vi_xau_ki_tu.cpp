#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void init(vector<char> &a){
    char x;
    set<char> se;
    while(cin >> x){
        se.insert(x);
    }
    for(auto it : se){
        a.push_back(it);
    }
}
void generate(vector<char> &a, int &flag){
    int n = a.size() - 1;
    int i = n - 1;
    while(i >= 0 && a[i] > a[i + 1]){
        --i;
    }
    if(i < 0){
        flag = 0;
    }
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.end());
    }
}
int main(){
    quick();
    vector<char> a;
    init(a);
    sort(a.begin(), a.end());
    int flag = 1;
    while(flag){
        for(int i = 0; i < a.size(); i++){
            cout << a[i];
        }
        cout << endl;
        generate(a, flag);
    }
    return 0;
}
