#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        TrieNode * child[26];
        bool end;

        TrieNode(){
            for(int i = 0; i<26; i++){
                child[i] = NULL;
            }
            end = false;
        }
};

void insert(TrieNode *root, string s){

    TrieNode *cur = root; 

    for(auto &u : s){

        int idx = u - 'a';

        if(cur->child[idx] == NULL){
            TrieNode *newNode = new TrieNode();
            cur->child[idx] = newNode;

        }

        cur = cur->child[idx];
    }

    cur->end = true;


} 

bool search(TrieNode *root, string s){
    if(root == NULL) return false;  //no need to chcek this
    //only need if some one init 
    //TrieNode *root; not create new node

    TrieNode *cur = root;

    for(auto &u : s){
        int idx = u - 'a';

        if(cur->child[idx] == NULL) return false;
        
        cur = cur->child[idx];

    }

    return cur->end; //if end == true then string exists


}

bool isPrefix(TrieNode *root, string s){
    TrieNode *cur = root;

    for(auto &u : s){
        int idx = u - 'a';

        if(cur->child[idx] == NULL) return false;

        cur = cur->child[idx];
    }

    return true;
}

bool isEmpty(TrieNode *root){
    for(int i = 0; i<26; i++){
        if(root->child[i]) return false;
    }
    return true;
}

int main(){
    TrieNode *root = new TrieNode();

    cout<<isEmpty(root)<<endl;


    
}