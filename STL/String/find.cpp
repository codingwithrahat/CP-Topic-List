#include<bits/stdc++.h>
using namespace std;

int main(){

   string s = "RahatHossan";

   cout<<s.find('H')<<endl; //return index of 'H' (0-based index)

   cout<<s.find('T')<<endl; //return string::npos (not found 'T)

   //perfect way to check

   if(s.find('T') == string::npos){
    cout<<"NOT FOUND\n";
   }else cout<<"FOUND\n";

  //TC - O(n)

}
