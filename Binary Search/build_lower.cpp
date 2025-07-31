//smallest index such that arr[idx] >= key

#include <bits/stdc++.h>
using namespace std;

int main() {
    
int n; cin>>n;
    
    vector<int>v(n);
    
    for(int i = 0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    //vcetor must be sorted    
    
    int key; cin>>key;
        
    int lo = lower_bound(v.begin(), v.end(), key) - v.begin();

    //lower_bound() return an iterator point
    //substract v.begin() from this iterator gives the index
    //give index in zero based indexing
    
    cout<<lo<<endl;

} 
