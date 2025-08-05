#include<bits/stdc++.h>
using namespace std;

int manual_ceil(int a, int b){
    return (a + b + 1) / 2;
    //5 + 4 + 1 = 10
    //10 / 2 = 5
    //correct cz ceil((5 + 4) / (2 * 1.0))= 5

    //but if a = 5, b = 5 
    //5 + 5 + 1 = 11
    //11 / 2 = 5 
    //which is still correct cz ceil((5 + 5) / (2 * 1.0)) = 5
}

int main(){
    int a = 5, b = 4;

    //cout<<(a + b) / 2<<endl; output - 4

    int ans = manual_ceil(a, b);

    cout<<ans<<endl; // output - 5

}
