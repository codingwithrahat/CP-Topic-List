#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> mp = {{1, "Rahat"}, {2, "Rakib"}};

    //search by key
    auto it = mp.find(2);  // O(log n), returns an iterator
 
    if(it == mp.end()){     //if not exist, point to end()
        cout<<"Not Found\n";
    }else cout<<it->second<<endl; //Rakib
}