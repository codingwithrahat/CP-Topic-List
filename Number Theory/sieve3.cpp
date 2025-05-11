#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

bool marked[N];

bool isPrime(int n){
	if(n < 2) return false;
	if(n == 2) return true; // take 2 as a prime number
	if(n % 2 == 0) return false; //skip even numbers
	return marked[n] == false;
}


void seive(int n){
	//only 2 is a prime number among all even numbers
	for(int i = 3; i * i <= n; i+=2){
		if(marked[i] == false){
			for(int j = i * i; j<=n; j += i + i){ //only marked odd multiples (j += i + i)
				marked[j] = true;
			}
		}
	}

}

int main(){
	int n; cin>>n;

	seive(n);

	for(int i = 1; i<=n; i++){
		if(isPrime(i)) cout<<i<<" ";
	}

	cout<<endl;
	
}
