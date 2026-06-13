#include <bits/stdc++.h>
using namespace std;

bool isCycle(int s, vector<vector<int>>&lis, vector<int>&vis) {
    
    queue<pair<int, int>>q;

    vis[s] = 1;
    q.push({s, -1});

    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for(auto &u : lis[node]){
            if(!vis[u]){
                vis[u] = 1;
                q.push({u, node});
            }else if(u != parent){
                return true;
            }
        }

    }

    return false;
}

int main() {

    int node, edge;
    cin >> node >> edge;

    vector<vector<int>>lis(node);
    vector<int>vis(node);

    int n1, n2;
    for (int i = 0; i < edge; i++) {
        cin >> n1 >> n2;
        lis[n1].push_back(n2);
        lis[n2].push_back(n1);
    }

    int source = 0;
    
    //suppose graph is connected
    if(isCycle(source, lis, vis)) cout<<"Cycle Detected\n";
    else cout<<"No Cycle Detected\n";

    return 0;
}
