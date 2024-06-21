#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int merge(int a[], int left, int mid, int right){
    vector<int> l(a + left, a + mid + 1);
    vector<int> r(a + mid + 1, a + right + 1);
    int i = 0, j = 0;
    int cnt = 0;
    int length1 = l.size(), length2 = r.size();
    while(i < length1 && j < length2){
        if(l[i] <= r[j]){
            a[left] = l[i];
            left++; i++;
        }
        else{
            a[left] = r[j];
            left++; j++;
            cnt += length1 - i;
        }
    }
    while(i < length1){
        a[left] = l[i];
        left++; i++;
    }
    while(j < length2){
        a[left] = r[j];
        left++; j++;
    }
    return cnt;
}
ll mergeSort(int a[], int left, int right){
    ll ans = 0;
    if(left < right){
        int mid = (left + right) / 2;
        ans += mergeSort(a, left, mid);
        ans += mergeSort(a, mid + 1, right);
        ans += merge(a, left, mid, right);
        return ans;
    }
    return ans;
}
int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << mergeSort(a, 0, n - 1);
    return 0;
}