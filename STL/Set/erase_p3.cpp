#include<bits/stdc++.h>
using namespace std;

int main(){

   set<int>s = {1, 2, 3, 4};

   auto it = s.find(3);

   s.erase(it); //TC - O(logn)

   for(auto &u : s) cout<<u<<" ";
   cout<<endl;



}
