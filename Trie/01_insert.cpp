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


int main(){
    TrieNode *root = new TrieNode();

    insert(root, "rahat");
}