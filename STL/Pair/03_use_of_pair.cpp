#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1, 2, 3};
    vector<int>v2 = {4, 5, 6};

    vector<pair<int, int>>p;

    p.push_back({v[0], v2[0]});
    p.push_back({v[1], v2[2]});
    p.push_back({v[2], v2[2]});

    cout<<"Way - 1"<<endl;

    for(pair<int, int>&u : p){
        cout<<u.first<<" "<<u.second<<endl;
    }
    cout<<endl;


    cout<<"Way - 2"<<endl;

    for(auto &u : p){
        cout<<u.first<<" "<<u.second<<endl;
    }
    cout<<endl;
    

    cout<<"Way - 3"<<endl;

    for(auto &[a, b] : p){
        cout<<a<<" "<<b<<endl;
    }
    cout<<endl;



}