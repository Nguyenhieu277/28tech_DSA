#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void merge(int a[], int left, int mid, int right){
    vector<int> l(a + left, a + mid + 1);
    vector<int> r(a + mid + 1, a + right + 1);
    int i = 0, j = 0;
    int length1 = l.size(), length2 = r.size();
    while(i < length1 && j < length2){
        if(l[i] < r[j]){
            a[left] = l[i];
            left++; i++;
        }
        else{
            a[left] = r[j];
            left++; j++;
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
}
void mergeSort(int a[], int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    for(int it : a){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}