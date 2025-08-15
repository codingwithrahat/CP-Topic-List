#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 10, k = 3;

   //10 - 0001010
   //(k)- 0001000
   //& -  0001000
   //if kth position is 0 then it give zero , if 1 it give 1

   if(n & (1 << k)) cout<<"true\n";
   else cout<<"false\n";

   //more optimize than using bitset to find kth is set bit or not

}
