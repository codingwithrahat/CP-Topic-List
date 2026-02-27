#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string>p = {1, "Rahat"};

    //call by val
    auto [a, s] = p;   //only support in c++17 and gcc maybe 8+
 
    cout<<a<<" "<<s<<endl;  // 1 Rahat

    a = 5; //p.first will not change, without &
    
    cout<<p.first<<endl; //1




    //call by ref
    auto &[a1, s1] = p;  
    a1 = 5;  //p.first will change

    cout<<p.first<<endl; //5


}