#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 10;

   bitset<32>bits(n);

   cout<<bits<<endl;

   bits.flip();

   cout<<bits.to_ulong()<<endl;
   //bitset to decimal converstion

}
