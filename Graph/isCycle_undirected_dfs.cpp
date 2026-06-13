#include <bits/stdc++.h>
using namespace std;

bool isCycle(int s, int parent, vector<vector<int>>&lis, vector<int>&vis) {
    vis[s] = true;

    for (auto &u : lis[s]) {
        if (!vis[u]) {
            if(isCycle(u, s, lis, vis)) return true;
        } else if (u != parent) { 
            return true;
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
    if(isCycle(source, -1, lis, vis)) cout<<"Cycle Detected\n";
    else cout<<"No Cycle Detected\n";

    return 0;
}
