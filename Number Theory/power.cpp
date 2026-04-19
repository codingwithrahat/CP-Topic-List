#include<bits/stdc++.h>
using namespace std;

void m_power(int a, int b){
    int mul = 1;

    //a^b = a * a * a * a (b times)

    for(int i = 1; i<=b; i++){
        mul *= a;
    }

    cout<<mul<<endl;
}

int main(){
    int a = 5;
    int b = 3;

    m_power(a, b);
}
