#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n; cin>>n;
	
	int a[n];
    
    for(int i = 0; i<n; i++) cin>>a[i];
    	
	int l = 0, r = n - 1;
	
	int key; cin>>key;
	bool flag = false;
	
    while(l <= r){
        
        int mid = l + (r - l) / 2;
        
        if(key == a[mid]){
            cout<<mid<<endl;
            flag = true;
            break;
        }else if(key < a[mid]){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    
    if(!flag) cout<<"Not found\n";

}
