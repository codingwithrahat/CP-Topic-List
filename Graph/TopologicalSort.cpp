//graph must be a DAG (Directed Acyclic Graph)

#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>>lis;
vector<int>vis;
stack<int>st;

void dfs(int node){
  vis[node] = true;

  for(auto & u : lis[node]){
    if(!vis[u]) dfs(u);
  }

  st.push(node);
}

void topoSort(){

  for(int i = 1; i<=n; i++){
    if(!vis[i]) dfs(i);
  }

  while(st.size() > 0){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;

}


int main(){

   cin>>n>>m;

   lis.assign(n + 1, vector<int>());
   //lis.assign(n + 1, vector<int>(m + 1, 0));
   vis.assign(n + 1, false);

   for(int i = 0; i<m; i++){
      int x, y; cin>>x>>y;
      lis[x].push_back(y);
   }

   topoSort();

}
