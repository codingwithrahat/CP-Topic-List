#include<bits/stdc++.h>
using namespace std;

int f(int n){
   if(n == 0 || n == 1) return n;

   return f(n - 1) + f( n - 2);

}

int32_t main(){

   int n = 8;

   cout<<f(n)<<endl;  //21


}
