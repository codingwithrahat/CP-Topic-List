#include<bits/stdc++.h>
using namespace std;

int main(){

   set<int>s = {1, 2, 4};

   auto it = s.find(4);

   if(it != s.end()){
    cout<<*it<<endl;
   }

   //TC - O(logn)

   //s.find() return an itterator
   //if found then itterator points to the element
   //if not found then it retturn s.end()


}
