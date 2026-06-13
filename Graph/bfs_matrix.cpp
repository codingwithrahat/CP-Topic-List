#include<bits/stdc++.h>
using namespace std;

void bfs(int s, vector<vector<int>>&adj, vector<int>&vis){
    queue<int>q;

    vis[s] = 1;
    q.push(s);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout<<node<<" ";

        for(int i = 0; i<adj.size(); i++){
            if(adj[node][i] != 0 && !vis[i]){
                vis[i] = 1;
                q.push(i);
            }
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

        for (int i = 0; i < node; i++){
            if(!vis[i]){
                bfs(i, adj, vis);
            }
        }
 }
