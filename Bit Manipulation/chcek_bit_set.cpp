#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 10;

   bitset<32>bits(n);

    // bits[] returns a boolean value (true if the bit is set, false if not)
    // A set bit means 1, an unset bit means 0
    // bits[1] means bit at index 1 (counting from 0 at the LSB)
    // LSB (least significant bit, rightmost bit) is index 0 - here it's 0 for n = 10

   if(bits[1] == true) cout<<"true\n";
   //another way
   //if(bits.test(1)) cout<<"true\n";
   else cout<<"false";

}
