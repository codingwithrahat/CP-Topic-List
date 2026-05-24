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

void levelOrder(Node *root){

    queue<Node*>q;

    if(root != NULL) q.push(root);

    while(!q.empty()){
        Node *cur = q.front();
        q.pop();

        cout<<cur->val<<" ";

        if(cur->left != NULL) q.push(cur->left);
        if(cur->right != NULL) q.push(cur->right);

    }
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    levelOrder(root); // 1 2 3 4 5
    cout<<endl;
}