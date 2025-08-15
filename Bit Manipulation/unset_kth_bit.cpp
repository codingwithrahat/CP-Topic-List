#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 10, k = 3;

   //10  - 00001010
   //(~k)- 11110111 , left shift 1 by kth place and flip all the bit
   //&   - 00000010, (2)
   //kth bit will convert to unset bit means 0

   cout<<(n & (~(1 << k)))<<endl;

}
