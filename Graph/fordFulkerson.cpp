#include<bits/stdc++.h>
using namespace std;

bool bfs(vector<vector<int>>&resG, int s, int t, vector<int>&par){
    int n = resG.size();

    vector<int>vis(n, 0);

    queue<int>q;

    q.push(s);

    vis[s] = 1;
    par[s] = -1;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i = 0; i<n; i++){
            if(!vis[i] && resG[u][i] > 0){
                par[i] = u;
                vis[i] = 1;

                if(i == t) return true;

                q.push(i);
            }
        }
    }

    return false;
}

int fordFulkerson(vector<vector<pair<int, int>>>&lis, int s, int t){
    int n = lis.size();

    vector<vector<int>>resG(n, vector<int>(n, 0));

    for(int i = 0; i<n; i++){
        for(auto &[a, b] : lis[i]){
            resG[i][a] = b;
        }
    }

    vector<int>par(n);

    int mx_flow = 0;

    while(bfs(resG, s, t, par)){
        int pat_flow = INT_MAX;

        for(int i = t; i != s; i = par[i]){
            int j = par[i];
            pat_flow = min(pat_flow, resG[j][i]);
        }

        for(int i = t; i != s; i = par[i]){
            int j= par[i];

            resG[j][i] -= pat_flow;
            resG[i][j] += pat_flow;
        }

        mx_flow += pat_flow;
    }

    return mx_flow;
}

int main(){


    int node, edge; cin>>node>>edge;

    vector<vector<pair<int, int>>>lis(node);

    for(int i = 0; i<edge; i++){
        int x1, x2, cap; cin>>x1>>x2>>cap;

        lis[x1].push_back({x2, cap});

    }

    int s, t; cin>>s>>t;

    cout<<"max flow : "<<fordFulkerson(lis, s, t)<<endl;
}