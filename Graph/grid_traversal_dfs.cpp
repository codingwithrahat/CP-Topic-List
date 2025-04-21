#include <bits/stdc++.h>
using namespace std;


int a[5][5];
bool visited[5][5];

int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[8] = {0, 0 , -1, 1, -1, 1, -1, 1};

bool valid(int x, int y){
    return (x >= 0 && x < 5 && y >= 0 && y < 5 && !visited[x][y]);
}


void dfs(int x, int y){


    visited[x][y] = true;


    for(int i = 0; i<8; i++){
        int next_x = x + dx[i];
        int next_y = y + dy[i];

        if(valid(next_x, next_y)){
            dfs(next_x, next_y);
        }
    }
}



int main() {
    dfs(2,2);

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cout<<visited[i][j]<<" ";
            //every node will be visited
        }

        cout<<endl;
    }
}
