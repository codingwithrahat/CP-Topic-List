#include<bits/stdc++.h>
using namespace std;

int main(){

   priority_queue<int>pq; //max heap

   pq.push(5);
   pq.push(3);
   pq.push(9);
   pq.push(2);

   while(!pq.empty()){
      cout<<pq.top()<<endl;
      pq.pop();
   }


}
