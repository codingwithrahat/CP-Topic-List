#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n; cin>>n;
	
	vector<int>v(n);
    
    for(int i = 0; i<n; i++) cin>>v[i];
    
    int key; cin>>key;
    	
	int up = upper_bound(v.begin(), v.end(), key) - v.begin();
	
	cout<<up<<endl;

} 
