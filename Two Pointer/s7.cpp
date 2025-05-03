// Find all triplet such that sum of two equals to third element

#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n){
   
    for(int i = n - 1; i>1 ; i--){
        int l = 0;
        int r = i - 1;

        while(l < r){
            int sum = a[l] + a[r];
            if(sum == a[i]){
                cout<<a[l]<<" + "<<a[r]<<" = "<<a[i]<<endl;
            }
            if(sum > a[i]) r--;
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
