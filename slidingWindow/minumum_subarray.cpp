#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void slidingWindow(int a[], int n, int k){
    int minLength = n + 1;
    int idx = -1, sum = 0, left = 0;
    for(int right = 0; right < n; right++){
        sum += a[right];
        while(sum >= k && left <= right){
            int length = right - left + 1;
            if(length < minLength){
                minLength = length;
                idx = left;
            }
            sum -= a[left];
            left++;
        }
    }
    if(minLength == n + 1){
        cout << -1 << endl;    
    }
    else{
        for(int i = idx; i < minLength + idx; i++){
             cout << a[i] << " ";
        }
        cout << endl;
    }
}
int main(){
    quick();
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &i : a){
        cin >> i;
    }
    slidingWindow(a, n, k);
    return 0;
}