//Exclusive Prefix
//current element is NOT included
//p[i] = product of all elements to the LEFT of i

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};

    int n = v.size();

    vector<int>p(n);

    p[0] = 1;

    for(int i = 1; i<n; i++){
        p[i] = p[i - 1] * v[i - 1];
    }

    for(auto &u : p) cout<<u<<" ";
    cout<<endl;
}