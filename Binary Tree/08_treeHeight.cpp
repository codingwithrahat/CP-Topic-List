#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;

    Node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }

};


//TC - O(n)
static int idx = -1;
Node* buildTree(vector<int>&pre){

    idx++;

    if(pre[idx] == -1) return NULL;
    
    Node *root = new Node(pre[idx]);
    root->left = buildTree(pre);
    root->right = buildTree(pre);

    return root;

}

//using level order traversal
int levelOrderHeight(Node *root, int cnt){

    queue<Node*>q;

    if(root != NULL) q.push(root);

    while(!q.empty()){
        int sz = q.size();
        

        for(int i = 0; i<sz; i++){
            Node *cur = q.front();
            q.pop();

            if(cur->left != NULL) q.push(cur->left);
            if(cur->right != NULL) q.push(cur->right);

        }

        cnt++;

    }

    return cnt;
}


int height(Node *root){
    if(root == NULL) return 0;

    int left = height(root->left);
    int right = height(root->right);

    return 1 + max(left, right);
}

int main(){

    vector<int>pre = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(pre); 

    cout<<height(root)<<endl; // 3

    cout<<levelOrderHeight(root, 0)<<endl; // 3
}