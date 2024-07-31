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
bool isSameLevel(node *root){
    if(root == NULL){
        return true;
    }
    queue<pair<node*, int>> q;
    q.push({root, 0});
    int leafLevel = -1;
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        node *tmp = it.first;
        int level = it.second;
        if(tmp->left == NULL && tmp->right == NULL){
            if(leafLevel == -1){
                leafLevel = level;
            }
            else if(leafLevel != level){
                return false;
            }
        }
        if(tmp->left != NULL) q.push({tmp->left, level + 1});
        if(tmp->right != NULL) q.push({tmp->right, level + 1});
    }
    return true;
}
bool isTwoChildren(node *root){
    if(root == NULL){
        return true;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    if(root->left != NULL && root->right != NULL){
        return isTwoChildren(root->left) && isTwoChildren(root->right);
    }
    return false;
}
int main(){
    Quick();
    int n;
    cin >> n;
    node *root = NULL;
    for(int i = 1; i <= n; i++){
        int u, v; char x;
        cin >> u >> v >> x;
        if(root == NULL){
            root = new node(u);
            makeNode(root, u, v, x);
        }
        else{
            insertNode(root, u, v, x);
        }
    }
    if(isSameLevel(root) && isTwoChildren(root)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}
/* No Code - No Bug */