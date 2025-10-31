#include<bits/stdc++.h>
using namespace std;

int main(){

   int n = 10;

   bitset<32>b(n);

   cout<<b<<endl; //binary

   string s = b.to_string();

   cout<<s<<endl; //binary number as string 

}
