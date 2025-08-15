//one's complement

#include<bits/stdc++.h>
using namespace std;

int main(){

   unsigned int a = 5;
   unsigned int b = ~a;
   
   //signed int use two's complement
   //unsigned int avoid negative result

   //~ - flip all the bit of a and store in b

   cout<<"original a: "<<a<<endl;
   cout<<"original b: "<<b<<endl;

   cout<<bitset<32>(a)<<endl; 
   cout<<bitset<32>(b)<<endl;

}
