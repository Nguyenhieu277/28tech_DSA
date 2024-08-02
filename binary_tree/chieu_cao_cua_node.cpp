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
void BFS(node *root){
    vector<int> v;
    queue<pair<node*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        node *tmp = it.first;
        int height = it.second;
        v.push_back(height);
        if(tmp->left != NULL) q.push({tmp->left, height + 1});
        if(tmp->right != NULL) q.push({tmp->right, height + 1});
    }
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
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
    BFS(root);
    return 0;
}
/* No Code - No Bug */