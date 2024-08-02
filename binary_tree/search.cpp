#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

struct node{
    int val;
    node *left;
    node *right;

    node(int x){
        val = x;
        left = right = NULL;
    };
};
node* insert(node *root, int val){
    if(root == NULL){
        return new node(val);
    }
    if(val < root->val){
        root->left = insert(root->left, val);
    }
    else root->right = insert(root->right, val);
    return root;
}
bool search(node *root, int val){
    if(root == NULL){
        return false;
    }
    if(root->val == val){
        return true;
    }
    else if(root->val > val){
        return search(root->left, val);
    }
    else return search(root->right, val);
}
int main(){
    Quick();
    int n, x;
    cin >> n;
    node *root = NULL;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        root = insert(root, val);
    }
    cin >> x;
    if(search(root, x)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}
/* No Code - No Bug */