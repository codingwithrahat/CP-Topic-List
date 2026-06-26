#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, string> mp = {{0, "Nafi"}, {1, "Rahat"}, {2, "Rakib"}, {3, "Sarawer"}};

    //erase using key
    //average O(1)
    //worst O(n)
    mp.erase(3);    

    for(auto &u : mp) cout<<u.second<<endl;



    //erase using itertor
    auto it = mp.find(2);   
    
    if(it != mp.end()) mp.erase(it);  
 
    for(auto &u : mp) cout<<u.second<<endl;


    //earse using iterator
    //average O(1)
    //worst O(n)
    mp.erase(mp.begin());   


    for(auto &u : mp) cout<<u.second<<endl;

 
    
}