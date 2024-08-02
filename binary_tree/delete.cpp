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
node* minNode(node* root){
    node *tmp = root;
    while(tmp != NULL && tmp->left != NULL){
        tmp = tmp->left;
    }
    return tmp;
}
node* deleteNode(node *root, int val){
    if(root == NULL) return root;
    if(root->val > val) root->left = deleteNode(root->left, val);
    else if(root->val < val) root->right = deleteNode(root->right, val);
    else{
        if(root->left == NULL){
            node *tmp = root->right;
            delete root;
            return tmp;
        }
        else if(root->right == NULL){
            node *tmp = root->left;
            delete root;
            return tmp;
        }
        else{
            node *tmp = minNode(root->right);
            root->val = tmp->val;
            root->right = deleteNode(root->right, tmp->val);
        }
    }
    return root;
}
void inOrder(node *root){
    if(root != NULL){
        inOrder(root->left);
        cout << root->val << " ";
        inOrder(root->right);
    }
}
int main(){
    Quick();
    int n, x;
    cin >> n;
    node *root = NULL;
    for(int i = 0 ; i < n; i++){
        int val; cin >> val;
        root = insert(root, val);
    }
    cin >> x;
    root = deleteNode(root, x);
    inOrder(root);
    return 0;
}
/* No Code - No Bug */