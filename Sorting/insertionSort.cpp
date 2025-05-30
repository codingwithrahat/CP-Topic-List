#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){
    for(int i = 1; i<n; i++){
        int key = a[i];
        int j = i - 1;
        while(a[j] > key && j >= 0){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main(){
    int n; cin>>n;

    int a[n];

    for(int i = 0; i<n; i++) cin>>a[i];

    insertionSort(a, n);
    
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}
