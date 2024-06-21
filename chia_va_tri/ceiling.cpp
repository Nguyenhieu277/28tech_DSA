#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int findLargestLessThanOrEqualToX(vector<int>& A, int X) {
    int left = 0;
    int right = A.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (A[mid] <= X) {
            result = A[mid]; 
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return result;
}

int main() {
    quick();
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int result = findLargestLessThanOrEqualToX(v, k);
    cout << result << endl;

    return 0;
}
