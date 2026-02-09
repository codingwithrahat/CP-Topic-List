#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int>d1;

    d1.push_back(1);  //1
    d1.push_back(2);  //1 - 2
    d1.push_back(3);  //1 - 2 - 3
 
    d1.clear(); 

    if(d1.empty()) cout<<"Empty"<<endl;    //TC - O(1)
    else cout<<d1.size()<<endl;


}