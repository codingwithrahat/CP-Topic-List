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


//using traversal
static int cnt2 = 0;
void preOrderCnt(Node *root){
    if(root == NULL) return;

    cnt2++;

    preOrderCnt(root->left);
    preOrderCnt(root->right);
}


int cnt(Node *root){
    if(root == NULL) return 0;

    int left = cnt(root->left);
    int right = cnt(root->right);

    return 1 + left + right;
}


int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    cout<<cnt(root)<<endl; // 5

    preOrderCnt(root);
    cout<<cnt2<<endl; // 5
}