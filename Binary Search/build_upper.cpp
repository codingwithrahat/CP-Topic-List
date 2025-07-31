// smallest index such that arr[idx] > key

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin>>n;
    
    vector<int>v(n);
    
    for(int i = 0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());
    
    int key; cin>>key;
        
    int up = upper_bound(v.begin(), v.end(), key) - v.begin();

    //give index in zero based indexing
    
    cout<<up<<endl;

} 
