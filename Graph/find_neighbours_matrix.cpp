#include<bits/stdc++.h>
using namespace std;
int adj[200][200];

int main(){
    
    
        int node, edge;
        cin >> node >> edge;

        int n1, n2;

        for (int i = 0; i < edge; i++){
            cin >> n1 >> n2;
            adj[n1][n2] = 1;
            adj[n2][n1] = 1;
        }

        int x; cin>>x;

        for(int i = 0; i<node; i++){
            if(adj[x][i] == 1) cout<<i<<" ";
        }
        cout<<endl;
 }
