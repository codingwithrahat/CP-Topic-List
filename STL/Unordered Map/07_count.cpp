#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, string> mp = {{1, "Rahat"}, {2, "Rakib"}};

    cout<<mp.count(1)<<endl;   //1, if the key exist
    cout<<mp.count(3)<<endl;   //0, if the key not exist
    
    //average O(1)
    //worst O(n)

    //similer to find()
    //but find can be return mp.end(), need to handle it != mp.end()
}