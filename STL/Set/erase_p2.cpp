#include<bits/stdc++.h>
using namespace std;

int main(){

   set<int>s = {1, 2, 3, 4};

   s.erase(s.begin(), s.end()); //remove all

   for(auto &u : s) cout<<u<<" ";
   cout<<endl;

   set<int>s2 = {1, 2, 3, 4, 5, 6, 7};

   s2.erase(s2.begin(), s2.find(5)); //remove elements from start up to 5 (excluding 5) , TC - O(K logn) , k elemets are being erase
   //s.find() return a itterator


   for(auto &u : s2) cout<<u<<" ";   //output - 5, 6, 7
   cout<<endl;




}
