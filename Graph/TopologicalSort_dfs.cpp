#include<bits/stdc++.h>
using namespace std;

bool dfs(int s, vector<vector<int>>&lis, vector<int>&vis, vector<int>&ans, vector<int>&pathVis){
    vis[s] = 1;
    pathVis[s] = 1;

    for(auto &u : lis[s]){
        if(!vis[u]){
            if(dfs(u, lis, vis, ans, pathVis)) return true;
        }else if(pathVis[u]){
            return true;
        }
    }

    pathVis[s] = 0;
    ans.push_back(s);

    return false;
}

int main(){
    int node, edge;
    cin>>node>>edge;

    vector<vector<int>>lis(node + 1);

    for(int i = 1; i<=edge; i++){
        int n1, n2;
        cin>>n1>>n2;

        lis[n1].push_back(n2);
    }

    vector<int>vis(node + 1);
    vector<int>pathVis(node + 1);
    vector<int>ans;

    for(int i = 1; i<=node; i++){
        if(!vis[i]){
            if(dfs(i, lis, vis, ans, pathVis)){
                cout<<"IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    reverse(ans.begin(), ans.end());

    for(auto &u : ans){
        cout<<u<<" ";
    }

    cout<<endl;

}