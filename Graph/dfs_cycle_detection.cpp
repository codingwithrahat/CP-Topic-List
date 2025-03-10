#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<int> visited;
bool hasCycle = false;

void dfs(int node, int parent) {
    visited[node] = true;
    cout << "Visited: " << node << endl;

    for (auto &u : v[node]) {
        if (!visited[u]) {
            dfs(u, node);
        } else if (u != parent) { 
            hasCycle = true;
        }
    }
}

int main() {

    int node, edge;
    cin >> node >> edge;

    v.resize(node);
    visited.resize(node, false);

    int n1, n2;
    for (int i = 0; i < edge; i++) {
        cin >> n1 >> n2;
        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }

    int source;
    cin >> source;
    
    dfs(source, -1);

    if (hasCycle) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle detected!" << endl;
    }

    return 0;
}
