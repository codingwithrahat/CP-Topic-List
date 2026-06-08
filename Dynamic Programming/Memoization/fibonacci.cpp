#include<bits/stdc++.h>
using namespace std;

int f(int n, vector<int>&memo){
  

   if(n == 0 || n == 1) return n;

   if(memo[n] != -1) return memo[n];

   return memo[n] = f(n - 1, memo) + f( n - 2, memo);

}

int32_t main(){
      
   int n = 8;

   vector<int>memo(n + 1, -1);

   cout<<f(n, memo)<<endl;  // 21


}
