#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 10, k = 3;

   bitset<32>bits(n);

   cout<<bits<<endl;

   bits[k].flip();
   //flip or toggle kth bit

   cout<<bits<<endl;

}
