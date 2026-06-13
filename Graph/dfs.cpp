#include<bits/stdc++.h>
using namespace std;
    
void dfs(int s, vector<vector<int>>&lis, vector<int>&vis){

   vis[s] = true;

   cout<<s<<" ";

   for(auto &u : lis[s]){
      if(!vis[u]){
            dfs(u, lis, vis);
      }
   }

}

int main(){
    
   int node, edge;
   cin>> node >> edge;  
   
   vector<vector<int>>lis(node);
 
   for (int i = 0; i < edge; i++){
      int n1, n2;
      cin >> n1 >> n2;
      lis[n1].push_back(n2);
      lis[n2].push_back(n1);
   }

   vector<int>vis(node);

   int source = 0;

   //suppose graph is connected
   dfs(source, lis, vis);

        
 }
