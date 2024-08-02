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
node* buildNode(vector<int> &v, int n){
    if(v.empty()) return NULL;
    node *root = new node(v[0]);
    for(int i = 1; i < n; i++){
        root = insert(root, v[i]);
    }
    return root;
}
void postOrder(node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->val << " ";
    }
}
int main(){
    Quick();
    int n;
    cin >> n;
    vector<int> v;
    node *root = NULL;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    root = buildNode(v, n);
    postOrder(root);
    return 0;
}
/* No Code - No Bug */