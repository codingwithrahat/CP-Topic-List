#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1, 2, 3, 4, 5};

    int n = a.size();

    vector<int>pf(n);

    pf[0] = a[0];
    
    for(int i = 1; i<n; i++){
      pf[i] = pf[i - 1] + a[i];
    }

    for(auto &u : pf){
      cout<<u<<" ";
    }

    cout<<endl;
  
}


