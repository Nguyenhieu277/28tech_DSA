#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int partitionHoare(int a[], int left, int right){
    int pivot = a[left];
    int i = left - 1, j = right + 1;
    while(true){
        do{
            i++;
        }while(a[i] < pivot);
        do{
            j--;
        }while(a[j] > pivot);
        if(i >= j){
            return j;
        }
        swap(a[i], a[j]);
    }
}
void quickSort(int a[], int left, int right){
    if(left < right){
        int mid = partitionHoare(a, left, right);
        quickSort(a, left, mid);
        quickSort(a, mid + 1, right);
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
    quickSort(a, 0, n - 1);
    for(int it : a){
        cout << it << " ";
    }
    return 0;
}