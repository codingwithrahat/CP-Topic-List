#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int size){
    for(int i = 0; i<size - 1; i++){
        
        for(int j = 0; j < size - 1 - i; j++){
            if(a[j] > a[j + 1]){
                swap(a[j] , a[j + 1]);
            }
        }
        
    }
}

int main(){
    int n; cin>>n;

    int a[n];

    for(int i = 0; i<n; i++) cin>>a[i];

    bubbleSort(a, n);
    
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}
