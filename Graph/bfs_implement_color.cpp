#include<bits/stdc++.h>
using namespace std;

#define white 1
#define gray 2
#define black 3


int adj[100][100];
int color[100];

int node, edge; 

void bfs(int startNode){
    for(int i = 0; i<node; i++){
        color[i] = white;
    }


    queue<int>q;
    q.push(startNode);

    while(!q.empty()){
        int x = q.front();
        q.pop();
        
        color[x] = gray;
        cout<<"Visited: "<<x<<endl;

        for(int i = 0; i<node; i++){
            if(adj[x][i] == 1){
                if(color[i] == white){
                    q.push(i);
                }
            }
        }



        color[x] = black;
    }
}

int main(){
    
    
        cin>>node>>edge;

        for(int i = 1; i<=edge; i++){
            int n1, n2; cin>>n1>>n2;
            adj[n1][n2] = 1;
            adj[n2][n1] = 1;
        }

        int startNode;
        cin>>startNode;

        bfs(startNode);
       
        
 }
