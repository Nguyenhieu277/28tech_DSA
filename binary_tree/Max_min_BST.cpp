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
    if(val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}
int findMax(node* root){
    node* tmp = root;
    while(tmp != NULL && tmp->right != NULL){
        tmp = tmp->right;
    }
    return tmp->val;
}
int findMin(node* root){
    node* tmp = root;   
    while(tmp != NULL && tmp->left != NULL){
        tmp = tmp->left;
    }
    return tmp->val;
}
int main(){
    Quick();
    int n;
    cin >> n;
    node *root = NULL;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        root = insert(root, x);
    }
    cout << findMax(root) << " " << findMin(root) << endl;
    return 0;
}
/* No Code - No Bug */