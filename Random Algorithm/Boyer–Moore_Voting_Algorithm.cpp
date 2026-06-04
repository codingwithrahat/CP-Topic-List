//Boyer–Moore Voting Algorithm
//trying to find the majority element (an element that appears more than n/2 times).

#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int>v = {1, 2, 1, 2, 1, 2, 2};

   int cnt = 0, mark = -1;

   for(int i = 0; i<v.size(); i++){
      if(cnt == 0) mark = v[i];

      if(mark == v[i]) cnt++;
      else cnt--;
   }

   cout<<mark<<endl;


}
