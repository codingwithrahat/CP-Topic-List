//Find all triplets with zero sum

#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n){
   
    for(int i = 0; i<n; i++){
        int l = i + 1;
        int r = n - 1;

        while(l < r){
            
            int sum = a[i] + a[l] + a[r];

            if(sum == 0){
                cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<endl;          
            }
            if(sum > 0) r--;
            else l++;
                
        
        }
    }
}

int main(){
    int n; cin>>n;

    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];

    sort(a, a + n);

    solve(a, n);
}
