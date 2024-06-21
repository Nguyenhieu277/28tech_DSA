#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void insertionSort(int a[], int n){
    int key, j;
    for(int i = 1; i < n; i++){
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
        cout << "Buoc " << i << ": ";
        for(int k = 0; k < n; k++){
            cout << a[k] << " ";
        }
        cout << endl;
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int &i : a){
        cin >> i;
    }
    insertionSort(a, n);
    return 0;
}