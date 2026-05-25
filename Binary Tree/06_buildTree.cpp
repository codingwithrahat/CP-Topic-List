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

//root - left - right
void preOrder(Node *root){
    if(root == NULL) return;

    cout<<root->val<<" ";

    preOrder(root->left);
    preOrder(root->right);
}

int main(){

    vector<int>pre = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(pre); 

    preOrder(root); // 1 2 3 4 5
}