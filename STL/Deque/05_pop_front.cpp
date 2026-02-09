#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int>d1;

    d1.push_back(1);  //1
    d1.push_back(2);  //1 - 2
    d1.push_back(3);  //1 - 2 - 3

    d1.pop_front();   //remove 1

    //TC - O(1)


    for(auto &u : d1) cout<<u<<" ";
    cout<<endl;


}