#include<bits/stdc++.h>
using namespace std;

int main(){

   queue<int>q; //FIFO - First IN First Out (Ticket counter line)

   //push is like push_back()
   q.push(5);     //5
   q.push(3);     //5 - 3
   q.push(9);     //5 - 3 - 9
   q.push(2);     //5 - 3 - 9 - 2
   
   //TC - O(1)

   //queue internally look like - 5 - 3 - 9 - 2

}
