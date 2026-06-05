// Inclusive prefix / inclusive product
// current element is included

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};

    int n = v.size();

    vector<int>p(n);

    p[0] = v[0];

    for(int i = 1; i<n; i++){
        p[i] = p[i - 1] * v[i];
    }

    for(auto &u : p) cout<<u<<" ";
    cout<<endl;
}