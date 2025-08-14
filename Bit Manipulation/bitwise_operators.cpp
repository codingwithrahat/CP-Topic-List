#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 3, b = 5;
    
    int ans1 = a & b;
    //011 and 101 = 001 (1)
    
    int ans2 = a | b;
    //011 or 101 = 111 (7)
    
    int ans3 = a ^ b;
    //011 xor 101 = 110 (6)
    
    cout<<ans1<<endl<<ans2<<endl<<ans3<<endl;

}
