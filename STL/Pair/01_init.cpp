#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string>p;

    p = make_pair(1, "Rahat");

    cout<<p.first<<" "<<p.second<<endl;

    p = {1, "Rahat"};

    cout<<p.first<<" "<<p.second<<endl;

    pair<int, string>p2 = p;  //copy by value

    p2.first = 4; 

    cout<<p2.first<<" "<<p2.second<<endl;   //4 Rahat


    pair<int, string> &p3 = p;  //copy by reference

    p3.first = 8; //it also change the value of p.first

    cout<<p.first<<endl;  //not 1 , replace by 8


    //user input
    pair<int, int>p4;

    cin>>p4.first>>p4.second;

    cout<<p4.first<<" "<<p4.second<<endl;


}