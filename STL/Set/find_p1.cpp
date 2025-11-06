#include<bits/stdc++.h>
using namespace std;

int main(){

   set<int>s = {1, 2, 4};

   if(s.find(3) != s.end()){
    cout<<"Found\n";
   }else{
    cout<<"Not Found\n";
   }

   //TC - O(logn)

   //s.find() return an itterator
   //if found then itterator points to the element
   //if not found then it retturn s.end()


}
