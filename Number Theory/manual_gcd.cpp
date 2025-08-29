#include<bits/stdc++.h>
using namespace std;

int m_gcd(int a, int b){
   int i = min(a, b);

   while(true){
      if(a % i == 0 && b % i == 0){
         return i;
      }else{
         i--;
      }
   }
}

int main(){

   int a = 12, b = 18;

   cout<<m_gcd(a, b)<<endl;   

}
