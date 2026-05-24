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

//left - root - right
void inOrder(Node *root){
    if(root == NULL) return;

    inOrder(root->left);

    cout<<root->val<<" ";

    inOrder(root->right);
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    inOrder(root);  // 4 2 1 3 5
    cout<<endl;
}