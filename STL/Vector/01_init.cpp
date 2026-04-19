#include<bits/stdc++.h>
using namespace std;

int main(){
    //init empty vector
    vector<int>e;



    //initialize with manual value
    vector<int>m{1, 2, 3}; 
    vector<int>m2 = {1, 2, 3}; //both are same



    //init using copy constructor(value) 
    vector<int>c = m; //c is a copy of m  , TC - O(n)
    vector<int>c2(m); //both are same
    cout<<c.size()<<endl; //3
    


    //init using copy constructor(refference)
    vector<int>&r = m; //TC - O(1), r is not a copy , r is like another name of m
    r.push_back(4);  //4 also add in m
    //if i chnage r2 it will change m also

    

    //init with size
    vector<int>v(3);  // size = 3, all elements default-initialized zero

    cout<<v.size()<<endl; //print size 3

    for(int i = 0; i<v.size(); i++) cout<<v[i]<<" ";  // 0 0 0
    cout<<endl;

    v.push_back(1);
    v.push_back(2);  //using push_back would increase the size

    cout<<v.size()<<endl; // size 5 

    for(int i = 0; i<v.size(); i++) cout<<v[i]<<" ";  // 0 0 0 1 2
    cout<<endl;



    //init with size and value
    vector<int>v2(3, 5);

    for(int i = 0; i<v2.size(); i++) cout<<v2[i]<<" ";  // 5 5 5
    cout<<endl;



    //init with range constructor
    set<int>s;

    s.insert(1);
    s.insert(2);
    s.insert(3);

    vector<int>v3(s.begin(), s.end());

    for(int i = 0; i<v3.size(); i++) cout<<v3[i]<<" ";
    cout<<endl;

    //Copies all elements from the set into a vector.
    //TC - O(n), n is size of set



}
