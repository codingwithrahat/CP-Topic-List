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
//root - left - right
void preOrder(Node *root){
    if(root == NULL) return;

    cout<<root->val<<" ";

    preOrder(root->left);
    preOrder(root->right);
}


int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    preOrder(root); // 1 2 4 3 5
    cout<<endl;
}