#include <bits/stdc++.h>
using namespace std;

void bfs(int s, vector<vector<int>>&lis, vector<int>&vis) {
    vis[s] = true;

    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout <<node<< " ";

        for (auto &u : lis[node]) {
            if (!vis[u]) {
                vis[u] = true; 
                q.push(u);
            }
        }
    }
}

int main() {

    int node, edge;
    cin >> node >> edge;

    vector<vector<int>>lis(node);

    for (int i = 0; i < edge; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        lis[n1].push_back(n2);
        lis[n2].push_back(n1);
    }

    
    vector<int>vis(node);

    int source = 0;

    //suppose graph is connected
    bfs(source, lis, vis);

    return 0;
}
