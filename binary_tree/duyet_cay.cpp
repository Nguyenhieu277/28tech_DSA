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
void makeNode(node *root, int u, int v, char x){
    if(x == 'L') root->left = new node(v);
    else root->right = new node(v);
}
void insertNode(node *root, int u, int v, char x){
    if(root == NULL){
        return;
    }
    if(root->val == u){
        makeNode(root, u, v, x);
    }
    else{
        insertNode(root->left, u, v, x);
        insertNode(root->right, u, v, x);
    }
}
node* buildNode(vector<int> &inorder, vector<int> &preoder, int preStart, int preEnd, int inStart, int inEnd, map<int, int> &mp){
    if(preStart > preEnd || inStart > inEnd){
        return NULL;
    }
    int rootVal = preoder[preStart];
    node *root = new node(rootVal);
    int inRoot = mp[rootVal];
    int numsLeft = inRoot - inStart;
    root->left = buildNode(inorder, preoder, preStart + 1, preStart + numsLeft, inStart, inRoot - 1, mp);
    root->right = buildNode(inorder, preoder, preStart + numsLeft + 1, preEnd, inRoot + 1, inEnd, mp);
    return root;
}
void postorder(node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->val << " ";
    }
}
int main(){
    Quick();
    int n;
    cin >> n;
    vector<int> inorder, preorder;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        preorder.push_back(x);
    }
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        inorder.push_back(x);
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[inorder[i]] = i;
    }
    node *root = buildNode(inorder, preorder, 0, n - 1, 0, n - 1, mp);
    postorder(root);
    return 0;
}
/* No Code - No Bug */