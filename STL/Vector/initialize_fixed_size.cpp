#include<bits/stdc++.h>
using namespace std;

int main(){

   vector<int>v(3);  //// size = 3, all elements default-initialized

   v[0] = 1; 
   v[1] = 2;
   v[2] = 0;

   cout<<v.size()<<endl; ////print size 3

   v.push_back(5);

   cout<<v.size()<<endl; //print size 4

   //using push_back would increase the size
   //need to use index to store value as like array
   

}
