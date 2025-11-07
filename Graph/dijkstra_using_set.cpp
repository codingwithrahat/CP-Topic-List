#include<bits/stdc++.h>
using namespace std;

#define druto() ios::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define ff first
#define ss second
#define int long long
#define double long double
#define pb push_back
#define ll long long

const int INF = 1e18;
const int mod = 1e9 + 7;

int n, m;
vector<vector<pair<int, int>>>lis; //node -> {child, weight}
vector<int>vis;
vector<int>dis;

void dijkstra(int src){

  set<pair<int, int>>st; //{distance , node}

  st.insert({0, src});
  dis[src] = 0;

  while(!st.empty()){

    auto it = *st.begin();
    int node = it.ss;
    int node_dis = it.ff;
    st.erase(st.begin());

    if(vis[node]) continue;

    vis[node] = true;

    for(auto & child : lis[node]){
      int child_node = child.ff;
      int child_w = child.ss;

      if(dis[node] + child_w < dis[child_node]){
        dis[child_node] = dis[node] + child_w;
        st.insert({dis[child_node], child_node});
      }

    }



  }

}

int32_t main(){

   druto();

   cin>>n>>m;

   lis.assign(n + 1, vector<pair<int, int>>());
   vis.assign(n + 1, false);
   dis.assign(n + 1, INF);

   for(int i = 1; i<=m; i++){
      int u, v, w; cin>>u>>v>>w;

      lis[u].pb({v, w});
      lis[v].pb({u, w});
   }

   int source; cin>>source;

   dijkstra(source);

   cout<<"Distance From : "<<source<<endl;

   for(int i = 1; i<=n; i++){
     if(dis[i] == INF) cout<<i<<" : INF\n";
     else cout<<i<<" : "<<dis[i]<<endl;
   }

}
