#include<bits/stdc++.h>
using namespace std;

int main(){
    
        int node, edge;
        cin >> node >> edge;

        vector<vector<int>>adj(node, vector<int>(node));

        for (int i = 0; i < edge; i++){
            int n1, n2;
            cin >> n1 >> n2;

            adj[n1][n2] = 1;
            adj[n2][n1] = 1;
        }

        vector<vector<int>>lis(node);

        for (int i = 0; i < node; i++){
            for (int j = 0; j < node; j++){
                if(adj[i][j] != 0){
                    lis[i].push_back(j);
                }
            }
        }
        
        for (int i = 0; i < node; i++){
            for (int j = 0; j < node; j++){
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }

        for (int i = 0; i < node; i++){
            cout<<i<<" - ";
            for (auto &u : lis[i]){
                cout<<u<<" ";
            }
            cout<<endl;
        }

 }
