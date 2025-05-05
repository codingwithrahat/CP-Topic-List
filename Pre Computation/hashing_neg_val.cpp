#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;

int hsh[N];
//global array by default initialize with zero
//max size 1e7, possible

int main(){
  
  int n; cin>>n;
  int a[n];
  
  for(int i = 0; i<n; i++) cin>>a[i];
  
  int mn = INT_MAX;
  
  for(int i = 0; i<n; i++){
    if(a[i] < mn){
      mn = a[i];
    }
  }
  
  int shift = 0;
  
  if(mn < 0){
    shift = (-1) * mn;
  }
  
  
  int q; cin>>q;
  
  for(int i = 0; i<n; i++){
    hsh[a[i] + shift]++;
  }
  
  
  while(q--){
    int x; cin>>x;
    cout<<hsh[x + shift]<<endl;
  }
}
