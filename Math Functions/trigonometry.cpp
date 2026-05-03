#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<sin(60)<<endl; //wrong output
    
    //convert to radius
    double rad = 60 * (M_PI/180);

    cout<<sin(rad)<<endl;
}