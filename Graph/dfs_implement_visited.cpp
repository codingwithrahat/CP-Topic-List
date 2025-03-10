#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>v;
vector<int>visited;

int node, edge;
    
    void dfs(int node){

        visited[node] = true;
        cout<<"visited : "<<node<<endl;
        
        
        for(auto &u : v[node]){
            if(!visited[u]){
                dfs(u);
            }
        }



    }

int main(){
    

        cin>> node >> edge;

        int n1, n2;
        v.resize(node);      
        
        
 
        for (int i = 0; i < edge; i++){
            cin >> n1 >> n2;
            v[n1].push_back(n2);
            v[n2].push_back(n1);
        }

        visited.resize(node, false);
        int source; cin>>source;
        dfs(source);

        
 }
