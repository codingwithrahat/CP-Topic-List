//binary exponentiation (fast power)

#include<bits/stdc++.h>
using namespace std;

void m_power(int a, int n){
    int mul = 1;

    while(n > 0){
        if(n % 2 != 0){
            mul *= a;
            n--;
        }else{
            a *= a;
            n /= 2;
        }
    }

    cout<<mul<<endl;
}

int main(){
    int a = 5;
    int b = 3;

    m_power(a, b);
}
