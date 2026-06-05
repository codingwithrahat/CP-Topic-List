#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1, 2, 3, 4, 5};

    int n = a.size();

    vector<int>sf(n);

    sf[n - 1] = a[n - 1];
    
    for(int i = n - 2; i>=0; i--){
      sf[i] = sf[i + 1] + a[i];
    }

    for(auto &u : sf){
      cout<<u<<" ";
    }

    cout<<endl;
  
}


