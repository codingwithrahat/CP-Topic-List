#include<bits/stdc++.h>
using namespace std;

void dfs(int s, vector<vector<int>>&adj, vector<int>&vis){
    vis[s] = 1;

    cout<<s<<" ";

    for(int i = 0; i<adj.size(); i++){
        if(adj[s][i] == 1 && !vis[i]){
            dfs(i, adj, vis);
        }
    }
}

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

        vector<int>vis(node);

        //maybe graph is not connected

        for(int i = 0; i<node; i++){
            if(!vis[i]){
                dfs(i, adj, vis);
            }
        }
 }
