#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
    return ((n & (n - 1)) == 0);
}


int main(){
    int n; cin>>n;

    if(isPowerOfTwo(n)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}
