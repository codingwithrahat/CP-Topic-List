#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, string> mp = {{0, "Nafi"}, {1, "Rahat"}, {2, "Rakib"}, {3, "Sarawer"}};

    cout<<mp[0]<<endl;

    //update 
    //average O(1)
    //worst O(n)

    mp[0] = "Siam";  

    cout<<mp[0]<<endl; 
    
}