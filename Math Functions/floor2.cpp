#include<bits/stdc++.h>
using namespace std;

int main(){
    double a = 5.5555, b = -5.5555;

    int p = floor(a); //output 5
    int p2 = int(a); //output 5

    int n = floor(b); //output (-6)
    int n2 = int(b); //output (-5)


    cout<<p<<" "<<p2<<endl;  
    cout<<n<<" "<<n2<<endl;

    //floor() rounds down to the nearest interger
    //for positive number type casting give the same ans as floor()


}
