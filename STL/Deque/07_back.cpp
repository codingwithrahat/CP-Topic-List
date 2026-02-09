#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int>d1;

    d1.push_back(1);  //1
    d1.push_back(2);  //1 - 2
    d1.push_back(3);  //1 - 2 - 3

    

    cout<<d1.back()<<endl;   //print 3
    //TC - O(1)


}