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
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back(x);
    }
    ll sum = accumulate(v.begin(), v.end(), 0LL);
    priority_queue<ll, vector<ll>, greater<ll>> minHeap;
    for(int i = 0; i < n; i++){
        minHeap.push(v[i]);
        if(minHeap.size() > k){
            minHeap.pop();
        }
    }
    ll largest = 0;
    while(!minHeap.empty()){
        largest += minHeap.top();
        minHeap.pop();
    }
    priority_queue<ll> maxHeap;
    for(int i = 0; i < n; i++){
        maxHeap.push(v[i]);
        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }
    ll smallest = 0;
    while(!maxHeap.empty()){
        smallest += maxHeap.top();
        maxHeap.pop();
    }
    ll tmp1 = abs((sum - largest) - largest);
    ll tmp2 = abs((sum - smallest) - smallest);
    cout << max(tmp1, tmp2) << endl;
    return 0;
}