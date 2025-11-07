#include<bits/stdc++.h>
using namespace std;

int main(){

   priority_queue<int>pq; 

   pq.push(5);
   pq.push(3);
   pq.push(9);
   pq.push(2); 


   if(pq.empty()) cout<<"Empty\n";  //TC - O(1)
   else cout<<"Not Empty\n";


}
