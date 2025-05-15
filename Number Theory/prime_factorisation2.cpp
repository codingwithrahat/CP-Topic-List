#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int>primes_fact;

	for(int i = 2; i * i <= n; i++){
		while(n % i == 0){
			primes_fact.push_back(i);
			n = n / i;
		}
	}
	
	//when n is a non prime number
	if(n > 1){
		primes_fact.push_back(n);
	}

	for(auto &u : primes_fact) cout<<u<<" ";
	cout<<endl;

	//tc - O(root N)

}
