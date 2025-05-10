#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n < 2) return false;

	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

vector<int> getPrimes(int n){ 

	vector<int>primes;
	for(int i = 2; i <= n ; i++){ // tc - n
		if(isPrime(i)){ //tc - root n
			primes.push_back(i);
		}
		
	}

	return primes;
}

int main(){
	int n; cin>>n;
	
	vector<int>v = getPrimes(n);

	for(auto u : v) cout<<u<<" ";
	cout<<endl;
	//total tc - n root n 
	
}
