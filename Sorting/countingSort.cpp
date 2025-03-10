#include<bits/stdc++.h>
using namespace std;

void countingSort(int a[], int n){
    int mx = 0;
    for(int i = 0; i<n; i++){
        mx = max(mx, a[i]);
    }

    int count[mx + 1] = {0};

    for(int i = 0; i < n; i++) count[a[i]]++;

    int j = 0;    
    for(int i = 0; i<=mx; i++){
        while(count[i] > 0){
            a[j] = i;
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
