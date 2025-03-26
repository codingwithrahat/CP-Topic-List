#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> &a, int l,int r, int key){

     if(l <= r){
        
        int mid = l + (r - l) / 2;
        
        if(key == a[mid]){
            return mid;
        }else if(key < a[mid]){
            return bs(a, l, mid - 1, key);
        }else{
            return bs(a, mid + 1, r, key);
        }
    } 

    return -1;
}

int main() {
   
   int n; cin>>n;
   
   vector<int> a(n);
    
   for(int i = 0; i<n; i++) cin>>a[i];

   sort(a.begin(), a.end());
      
   int l = 0, r = n - 1;
   
   int key; cin>>key;
   
   int ans = bs(a, 0, n - 1, key);

   if(ans == -1) cout<<"Not found\n";
   else cout<<ans<<endl;

}
