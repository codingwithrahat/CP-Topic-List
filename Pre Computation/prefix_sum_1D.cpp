//Range sum queries

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;

int a[N];
int pf[N];

int main(){
    int n; cin>>n;

    // 1 base index
    for(int i = 1; i<=n; i++) cin>>a[i];

    
    for(int i = 1; i<=n; i++){
      pf[i] = pf[i - 1] + a[i];
    }
    
    int q; cin>>q;
    
    while(q--){
      int l, r; cin>>l>>r;
      
      cout<<pf[r] - pf[l - 1]<<endl;
    }
}


