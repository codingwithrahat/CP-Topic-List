#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> lis;
vector<bool> visited;
int node, edge;

void bfs(int startNode) {
    visited[startNode] = true;

    queue<int> q;
    q.push(startNode);

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        cout << "Visited: " << x << endl;

        for (auto &u : lis[x]) {
            if (!visited[u]) {
                visited[u] = true; 
                q.push(u);
            }
        }
    }
}

int main() {

    cin >> node >> edge;
    lis.resize(node + 1); 
    visited.resize(node + 1, false);

    for (int i = 0; i < edge; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        lis[n1].push_back(n2);
        lis[n2].push_back(n1);
    }

    int startNode;
    cin >> startNode;

    bfs(startNode);

    return 0;
}
