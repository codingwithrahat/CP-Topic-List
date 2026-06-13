#include <bits/stdc++.h>
using namespace std;

bool isCycle(int s, vector<vector<int>>&lis, vector<int>&vis, vector<int>&pathVis){
    vis[s] = 1;
    pathVis[s] = 1;

    for(auto &u : lis[s]){
        if(!vis[u]){
            if(isCycle(u, lis, vis, pathVis)) return true;
        }else if(pathVis[u]){
            return true;
        }
    }

    pathVis[s] = 0;
    return false;
}

int main() {

    int node, edge;
    cin >> node >> edge;

    vector<vector<int>>lis(node); // 0 to n - 1 


    for (int i = 0; i < edge; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        lis[n1].push_back(n2);
    }

    vector<int>vis(node);
    vector<int>pathVis(node);

    for(int i = 0; i<node; i++){
        if(!vis[i]){
            if(isCycle(i, lis, vis, pathVis)){
                cout<<"Cycle Detected\n";
                return 0;
            }
        }
    }

    cout<<"No Cycle Detected\n";
    

}
