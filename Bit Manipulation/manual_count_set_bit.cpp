//count the number of 1 bits in a number's binary representatioin

#include<bits/stdc++.h>
using namespace std;

int manual_popcount(int n){
  
  int cnt = 0, r;
  
  while(n > 0){
    
    r = n % 2;
    
    if(r == 1) cnt++;
    
    n /= 2;
    
  }
  
  return cnt;
}

int main(){

    int n; cin>>n;
      
    int cnt = manual_popcount(n);
      
    cout<<cnt<<endl;  

}
