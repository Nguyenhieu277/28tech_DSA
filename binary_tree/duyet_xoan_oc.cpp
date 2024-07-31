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
void SpiralOder(node *root){
    stack<node*> s1, s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            auto tmp = s1.top();
            s1.pop();
            cout << tmp->val << " ";
            if(tmp->right != NULL){
                s2.push(tmp->right);
            }
            if(tmp->left != NULL){
                s2.push(tmp->left);
            }
        }
        while(!s2.empty()){
            auto tmp = s2.top();
            s2.pop();
            cout << tmp->val << " ";
            if(tmp->left != NULL){
                s1.push(tmp->left);
            }
            if(tmp->right != NULL){
                s1.push(tmp->right);
            }
        }
    }
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
    SpiralOder(root);
    return 0;
}
/* No Code - No Bug */