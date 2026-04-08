//count divisors and sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    int cnt = 0, sum = 0;
    cout<<"Divisors : \n";

    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cout<<i<<" ";
            cnt++;
            sum += i;
            if(i != n / i){
                cout << n / i<<endl;
                cnt++;
                sum += n / i;
            }
        }
    }

    cout<<endl<<cnt<<" "<<sum<<endl;

    //tc - O(root N)
}
