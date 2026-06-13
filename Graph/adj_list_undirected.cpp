#include <bits/stdc++.h>
using namespace std;

int main() {

    int node, edge;
    cin >> node >> edge;

    vector<vector<int>>lis(node); // 0 to n - 1 

    for (int i = 0; i < edge; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        lis[n1].push_back(n2);
        lis[n2].push_back(n1);
    }

    for(int i = 0; i < node; i++){
        cout<<i<<" - ";
        for(auto &u : lis[i]){
            cout<<u<<" ";
        }
        cout<<endl;
    }

}
