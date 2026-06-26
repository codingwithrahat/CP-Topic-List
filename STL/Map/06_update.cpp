#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> mp = {{0, "Nafi"}, {1, "Rahat"}, {2, "Rakib"}, {3, "Sarawer"}};

    cout<<mp[0]<<endl; //nafi

    //update 

    mp[0] = "Siam";  //O(logn)

    cout<<mp[0]<<endl; //siam

 
    
}