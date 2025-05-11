#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

bool marked[N];

bool isPrime(int n){
	if(n < 2) return false;
	return marked[n] == false;
}

void seive(int n){
	for(int i = 2; i<n; i++){
		if(marked[i] == false){
			for(int j = i + i; j<=n; j += i){
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
