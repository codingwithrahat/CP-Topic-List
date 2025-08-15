#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 4;
   //4 - 100

   cout<<(n << 1)<<endl;
   //every bit shift in left by 1 place
   //100_
   //last place fill with 0
   //1000 - (8)
   //(n << 1) == n * (2 pow(k)) == 4 * (2 pow(1))

   cout<<(n >> 1)<<endl;
   //every bit shift in right by 1 place
   //010
   //last zero will vanish
   //010 - (2)
   //(n >> 1) == n / (2 pow(k)) == 4 / (2 pow(1))


}
