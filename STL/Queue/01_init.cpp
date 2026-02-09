#include<bits/stdc++.h>
using namespace std;

int main(){

    //init empry queue
    queue<int>q;

    q.push(1);
    q.push(2);


    queue<int>q2 = q;  //copy constructor
    //queue<int>q2(q); 
    //both are same


    //queue<int>q3 = {1, 2, 3}
    //this will give error cz queue is not a container like deque or vector or list
    //its an adapter
    
    //queue<int>q4(v.begin(), v.end()); also give error


}