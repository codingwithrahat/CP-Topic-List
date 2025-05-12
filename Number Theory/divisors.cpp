//count divisors and sum

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;

	int cnt = 0, sum = 0;
	cout<<"Divisors : \n";
	for(int i = 1; i<=n; i++){
		if(n % i == 0){
			cout<<i<<" ";
			cnt++;
			sum += i;
		}
	}

	cout<<endl<<cnt<<" "<<sum<<endl;

	//tc - O(N)
}
