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
static int sum2 = 0;
void preOrderSum(Node *root){
    if(root == NULL) return;

    sum2 += root->val;

    preOrderSum(root->left);
    preOrderSum(root->right);
}

int sum(Node *root){
    if(root == NULL) return 0;

    int leftSum = sum(root->left);
    int rightSum = sum(root->right);

    return root->val + leftSum + rightSum;
}


int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    cout<<sum(root)<<endl; // 15

    preOrderSum(root);
    cout<<sum2<<endl;  //15
}