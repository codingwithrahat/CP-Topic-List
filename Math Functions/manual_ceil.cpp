#include<bits/stdc++.h>
using namespace std;

int manual_ceil(int a, int b){
    return (a + b - 1) / b;
}

int main(){
    int a = 5, b = 4;

    int ans = manual_ceil(a, b);

    cout<<ans<<endl;

}
