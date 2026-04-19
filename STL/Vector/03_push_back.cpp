//vector is like array
//but size can be changed
//vcetor continious memory block

#include<bits/stdc++.h>
using namespace std;

int main(){

   vector<int>v;

   int n; cin>>n;

   for(int i = 0; i<n; i++){
      int x; cin>>x;
      v.push_back(x);   //O(1)
   }

   for(int i = 0; i < n; i++){
      cout<<v[i]<<" ";
   }

   cout<<endl;


   

}
