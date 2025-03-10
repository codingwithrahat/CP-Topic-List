#include<bits/stdc++.h>
using namespace std;

#define white 1
#define gray 2
#define black 3

int color[100];

int adj[200][200];
int node, edge;


void dfsvisit(int x){
    color[x] = gray;
    cout << "Visiting: " << x << endl;

    for(int i = 0; i<node; i++){
        if(adj[x][i] == 1){
            if(color[i] == white){
                dfsvisit(i);
            }
        }
    }



    color[x] = black;
}


void dfs(){
    for(int i = 0; i<node; i++){
        color[i] = white;
    }


    for(int i = 0; i<node; i++){
        if(color[i] == white){
            dfsvisit(i);
        }
    }
}


int main(){
    
    
        
        cin >> node >> edge;

        int n1, n2;

        for (int i = 0; i < edge; i++){
            cin >> n1 >> n2;
            adj[n1][n2] = 1;
            adj[n2][n1] = 1;
        }
            
        dfs();
 }
