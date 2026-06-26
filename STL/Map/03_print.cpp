#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, string>m;
    m[6] = "rahat";
    m[5] = "rakib";

    //way 1
    //O(n) 
    map<int, string> ::iterator it;
    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    } 
    cout<<endl;

    //way 2
    //O(n) 
    for(auto it2 = m.begin(); it2 != m.end(); it2++){
        cout<<it2->first<<" "<<it2->second<<endl;
    }
    cout<<endl;

    //way - 3
    //O(n)
    for(auto &u : m){
        cout<<u.first<<" "<<u.second<<endl;
    }
    cout<<endl;


}