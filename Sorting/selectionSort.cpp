#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n){
    for(int i = 0; i<n; i++){
        
        int j = i + 1;
        int k = i;

        while(j < n){
            if(a[j] < a[k]){
                k = j;
            }
            j++;
        }
        swap(a[i], a[k]);
    }   
}

int main(){
    int n; cin>>n;

    int a[n];

    for(int i = 0; i<n; i++) cin>>a[i];

    selectionSort(a, n);
    
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}
