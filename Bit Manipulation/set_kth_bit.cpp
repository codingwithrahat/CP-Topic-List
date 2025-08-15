#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 10, k = 2;

   //10 - 00001010
   //(k)- 00000100 , left shift 1 by kth place
   //| -  00001110 , (14)
   //kth bit will convert to set bit means 1

   cout<<(n | (1 << k))<<endl;

}
