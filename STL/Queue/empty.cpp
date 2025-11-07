#include<bits/stdc++.h>
using namespace std;

int main(){

   queue<int>q; 

   q.push(5); 
   q.push(3);
   q.push(9);
   q.push(2); 

   if(q.empty()) cout<<"Empty\n"; //TC - O(1)
   else cout<<"Not Empty\n";

}
