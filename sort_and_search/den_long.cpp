#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    double maxRadius = max(v[0], k - v[v.size() - 1]);
    for(int i = 1; i < v.size() - 1; i++){
        double distance = v[i] - v[i - 1];
        maxRadius = max(maxRadius, distance / 2.0);
    }
    cout << fixed << setprecision(10) << maxRadius << endl;
    return 0;
}