#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void slidingWindow(int a[], int n, int k){
    deque<int> maxDq, minDq;
    for(int i = 0; i < k; i++){
        while(!maxDq.empty() && a[i] >= a[maxDq.back()]){
            maxDq.pop_back();
        }
        while(!minDq.empty() && a[i] <= a[minDq.back()]){
            minDq.pop_back();
        }
        maxDq.push_back(i);
        minDq.push_back(i);
    }
    for(int i = k; i < n; i++){
        cout << a[minDq.front()] << " " << a[maxDq.front()] << endl;
        while(!maxDq.empty() && maxDq.front() <= i - k){
            maxDq.pop_front();
        }
        while(!minDq.empty() && minDq.front() <= i - k){
            minDq.pop_front();
        }
        while(!maxDq.empty() && a[i] >= a[maxDq.back()]){
            maxDq.pop_back();
        }
        while(!minDq.empty() && a[i] <= a[minDq.back()]){
            minDq.pop_back();
        }
        maxDq.push_back(i);
        minDq.push_back(i);
    }
    cout << a[minDq.front()] << " " << a[maxDq.front()] << endl;
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    slidingWindow(a, n, k);
    return 0;
}