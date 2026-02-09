#include<bits/stdc++.h>
using namespace std;

int main(){

   queue<int>q; 

   q.push(5); 
   q.push(3);
   q.push(9);
   q.push(2);   //5 - 3 - 9 - 2


   //remove from front
   q.pop(); //remove 5
   q.pop(); //remove 3 
   //TC - O(1)

   cout<<q.size()<<endl; //print 2

}
