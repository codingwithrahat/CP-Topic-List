//Minimum Subarry Sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; 
    
    vector<int>v(n);
    
    for(int i = 0; i<n; i++) cin>>v[i];
    
    int minSum = INT_MAX, curSum = 0;
    
    for(int i = 0; i<n; i++){
      
      curSum = curSum + v[i];
     
      minSum = min(curSum, minSum);
    
      
      if(curSum > 0){
        curSum = 0;
      }
      
      
    }
    
    cout<<minSum<<endl;
}
