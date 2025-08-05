#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5, b = 4;

    //cout<<(a + b) / 2<<endl; output - 4

    int ans = ceil((a + b) / (2 * 1.0)); //1 operand should be a float

    cout<<ans<<endl; // output - 5

}
