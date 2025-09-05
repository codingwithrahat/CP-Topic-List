#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>lis;
vector<int>visited;

int node, edge;
    
void dfs(int node){

   visited[node] = true;
   cout<<"visited : "<<node<<endl;
        
        
   for(auto &u : lis[node]){
      if(!visited[u]){
            dfs(u);
      }
   }



}

int main(){
    

   cin>> node >> edge;

   int n1, n2;
   lis.assign(node + 1, vector<int>());
   visited.assign(node + 1, false);      
        
        
 
   for (int i = 0; i < edge; i++){
      cin >> n1 >> n2;
      lis[n1].push_back(n2);
      lis[n2].push_back(n1);
   }

   int source; cin>>source;
   dfs(source);

        
 }
