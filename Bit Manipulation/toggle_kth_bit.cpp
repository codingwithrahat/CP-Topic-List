#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 10, k = 3;

   //10 - 00001010
   //(k)- 00001000 , left shift 1 bt kth place
   //^  - 00000010 , (2)
   //only toggle the kth bit

   //another exmaple n = 10, k = 2
   //10 - 00001010
   //(k)- 00000100
   //^  - 00001110 , (14)

   cout<<(n ^ (1 << k))<<endl;

}
