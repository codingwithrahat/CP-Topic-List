// Inclusive suffix / inclusive product
// current element is included

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};

    int n = v.size();

    vector<int>s(n);

    s[n - 1] = v[n - 1];

    for(int i = n - 2; i>=0; i--){
        s[i] = s[i + 1] * v[i];
    }

    for(auto &u : s) cout<<u<<" ";
    cout<<endl;
}