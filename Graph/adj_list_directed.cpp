#include <bits/stdc++.h>
using namespace std;

int main() {

    int node, edge;
    cin >> node >> edge;

    vector<vector<int>>lis(node); // 0 to n - 1 

    //edge is n1 -> n2, from n1 to n2

    for (int i = 0; i < edge; i++) {   
        int n1, n2;
        cin >> n1 >> n2;
        lis[n1].push_back(n2);
    }

    for(int i = 0; i < node; i++){
        cout<<i<<" - ";
        for(auto &u : lis[i]){
            cout<<u<<" ";
        }
        cout<<endl;
    }

}
