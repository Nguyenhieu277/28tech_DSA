#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void selectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            swap(a[i], a[min_idx]);
        }
        cout << "Buoc " << i + 1 << ": ";
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
    selectionSort(a, n);
    
    return 0;
}