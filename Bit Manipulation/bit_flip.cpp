#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 10;

   bitset<32>bits(n);

   cout<<bits<<endl;

   bits.flip();
   //flip all 1 into 0 and all zero into 1

   cout<<bits<<endl;

}
