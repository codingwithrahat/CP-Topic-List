#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> mp = {{0, "Nafi"}, {1, "Rahat"}, {2, "Rakib"}, {3, "Sarawer"}};

    //erase using key
    mp.erase(3);    //O(logn)

    for(auto &u : mp) cout<<u.second<<endl;



    //erase using itertor
    auto it = mp.find(2);    //find O(logn)
    
    if(it != mp.end()) mp.erase(it);  //earse using itertor O(1)
 
    for(auto &u : mp) cout<<u.second<<endl;


    mp.erase(mp.begin());   //O(1)

    for(auto &u : mp) cout<<u.second<<endl;

 
    
}