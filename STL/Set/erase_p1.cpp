#include<bits/stdc++.h>
using namespace std;

int main(){

   set<int>s = {1, 2, 3, 4};

   s.erase(2); //remove element with value 2

   for(auto &u : s) cout<<u<<" ";
   cout<<endl;

}
