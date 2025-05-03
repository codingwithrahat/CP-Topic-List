// Find four elements that sum to a given value

#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n, int x){
   
    for(int i = 0; i<n; i++){
        for(int j = i + 1; j < n; j++){
            int l = j + 1;
            int r = n - 1;

            while(l < r){
                int sum = a[i] + a[j] + a[l] + a[r];
                if(sum == x){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<" "<<a[r]<<endl;
                }
                if(sum > x) r--;
                else l++;
            }
        }
    }
}

int main(){
    int n, x; cin>>n>>x;

    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];

    sort(a, a + n);

    solve(a, n, x);
}
