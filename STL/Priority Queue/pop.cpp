#include<bits/stdc++.h>
using namespace std;

int main(){

   priority_queue<int>pq; 

   pq.push(5);
   pq.push(3);
   pq.push(9);
   pq.push(2);

   pq.pop(); //remove the top element (largest) , TC-O(logn)

   cout<<pq.size()<<endl; //print 3


}
