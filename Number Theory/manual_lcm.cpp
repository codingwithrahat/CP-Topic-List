#include<bits/stdc++.h>
using namespace std;

int main(){

   int a = 5, b = 7;

   int i = 1;
   while(true){
      if((i % a == 0 ) && (i % b == 0)){
         cout<<"LCM : "<<i<<endl;
         break;
      }
      i++;
   }


}
