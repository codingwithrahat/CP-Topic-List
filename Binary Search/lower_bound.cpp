#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin>>n;
    
    int a[n];
    
    for(int i = 0; i<n; i++) cin>>a[i];
        
    int l = 0, r = n - 1;
    
    int key; cin>>key;
    int ans = n;
    
    while(l <= r){
        
        int mid = l + (r - l) / 2;
        
        if(a[mid] >= key){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    
    cout<<ans<<endl;

}
