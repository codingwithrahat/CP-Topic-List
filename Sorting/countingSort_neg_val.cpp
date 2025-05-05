#include<bits/stdc++.h>
using namespace std;

void countingSort(int a[], int n){
  
    int mx = INT_MIN;
    int mn = INT_MAX;
    
    for(int i = 0; i<n; i++){
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    
    int shift = 0;
    
    if(mn < 0){
      shift = (-1) * mn;
    }
    
    int sz = mx + shift + 1;
  
  
    int count[sz] = {0};

    for(int i = 0; i < n; i++) count[a[i] + shift]++;

    int j = 0;    
    for(int i = 0; i<sz; i++){
        while(count[i] > 0){
            a[j] = i - shift;
            j++;
            count[i]--;
        }
    }
}

int main(){
    int n; cin>>n;

    int a[n];

    for(int i = 0; i<n; i++) cin>>a[i];

    countingSort(a, n);
    
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}
