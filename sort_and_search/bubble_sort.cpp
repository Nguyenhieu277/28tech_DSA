#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/
// bool check(int a[], int n){
//     for(int i = 0; i < n - 1; i++){
//         if(a[i] > a[i + 1]){
//             return false;
//         }
//     }
//     return true;
// }
void bubbleSort(int a[], int n){
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    
        cout << "Buoc " << i + 1 << ": ";
        for(int k = 0; k < n; k++){
            cout << a[k] << " ";
        }
        cout << endl;
        cnt++;
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
    bubbleSort(a, n);
    return 0;
}