#include<bits/stdc++.h>
using namespace std;


int main(){
    
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
    
        int node, edge;
        cin >> node >> edge;

        int n1, n2;

        vector<int>v[node];

        for (int i = 0; i < edge; i++){
            cin >> n1 >> n2;
            v[n1].push_back(n2);
            v[n2].push_back(n1);
        }

        for(int i = 0; i<node; i++){
            cout<<i<<" : ";
            for(auto &neighbor : v[i]){
                cout<<neighbor<<" ";
            }
            cout<<endl;
        }

        
 }
