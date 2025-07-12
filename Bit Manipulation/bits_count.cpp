//count the number of 1 bits in a number's binary representatioin

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x; cin>>x;

    int cnt = __builtin_popcount(x); 

    cout<<cnt<<endl;

}
