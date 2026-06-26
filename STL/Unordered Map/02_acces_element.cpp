#include<bits/stdc++.h>
using namespace std;

int main(){


    unordered_map<int, string>m2 = {{1, "rahat"}, {2, "rakib"}};

    // cout<<m2.first<<endl; error

    cout<<m2[1]<<endl; //O(1)
    
    cout<<m2.at(1)<<endl; //O(1)

    auto it = m2.begin(); 

    cout<<it->first<<endl; //O(1)
    cout<<it->second<<endl; 


    //average case O(1)
    //but in worst case O(n)
    //most of the time O(1)
}