#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    if(n <= 0){
        cout<<"Not power of two\n";
        return 0;
    }

    while(n > 1){

        if(n % 2 != 0){
            cout<<"Not power of two\n";
            return 0;
        }

        n = n / 2;


    }

    cout<<"Power of two\n";


}
