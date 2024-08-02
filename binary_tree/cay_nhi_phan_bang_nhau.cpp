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
bool areIdentical(node *root1, node *root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL || root2 == NULL){
        return false;
    }
    return (root1->val == root2->val) && areIdentical(root1->left, root2->left)
            && areIdentical(root1->right, root2->right);
}
int main(){
    Quick();
    int n;
    cin >> n;
    node *root1 = NULL;
    for(int i = 1; i <= n; i++){
        int u, v; char x;
        cin >> u >> v >> x;
        if(root1 == NULL){
            root1 = new node(u);
            makeNode(root1, u, v, x);
        }
        else{
            insertNode(root1, u, v, x);
        }
    }
    int m;
    cin >> m;
    node *root2 = NULL;
    for(int i = 1; i <= m; i++){
        int u, v; char x;
        cin >> u >> v >> x;
        if(root2 == NULL){
            root2 = new node(u);
            makeNode(root2, u, v, x);
        }
        else{
            insertNode(root2, u, v, x);
        }
    }
    if(areIdentical(root1, root2)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}
/* No Code - No Bug */