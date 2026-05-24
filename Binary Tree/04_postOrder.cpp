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

//left - right - root
void postOrder(Node *root){
    if(root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);

    cout<<root->val<<" ";
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    postOrder(root); // 4 2 5 3 1
    cout<<endl;
}