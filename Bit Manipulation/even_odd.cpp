#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 6; // even
   
   //6 - 0110
   //1 - 0001
   //& - 0000 
   //even number least bit always 0

   if((n & 1) == 0) cout<<"Even\n"; // faster than (n % 2 != 0)
   else cout<<"Odd\n"; //(n & 1) == 1

   //7 - 0111
   //1 - 0001
   //& - 0001
   //odd number least bit always 1

}
