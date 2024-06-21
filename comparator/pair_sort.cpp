#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*created by: HiuDev*/
double length_of_point(int x, int y){
    return sqrt(x * x + y * y);
}
bool cmp(pair<int, int> a, pair<int, int> b){
    double length_a = length_of_point(a.first, a.second);
    double length_b = length_of_point(b.first, b.second);
    if(length_a != length_b) return length_a < length_b;
    else{
        if(a.first != b.first) return a.first < b.first;
        else return a.second < b.second;
    }
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}
