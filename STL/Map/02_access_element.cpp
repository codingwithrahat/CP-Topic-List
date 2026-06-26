#include<bits/stdc++.h>
using namespace std;

int main(){


    map<int, string>m2 = {{1, "rahat"}, {2, "rakib"}};

    // cout<<m2.first<<endl; error

    cout<<m2[1]<<endl; //O(logn)
    
    cout<<m2.at(1)<<endl; //O(logn)

    auto it = m2.begin(); 

    cout<<it->first<<endl; //O(1)
    cout<<it->second<<endl; 
}