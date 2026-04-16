// Maximum Subarray Sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; 
    
    vector<int>v(n);
    
    for(int i = 0; i<n; i++) cin>>v[i];
    
    int maxSum = INT_MIN, curSum = 0;
    
    for(int i = 0; i<n; i++){
      
      curSum = curSum + v[i];
     
      maxSum = max(curSum, maxSum);
    
      
      if(curSum < 0){
        curSum = 0;
      }
      
      
    }
    
    cout<<maxSum<<endl;
}
