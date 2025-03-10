#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int s, int mid, int e){
    
    int size = e - s + 1; 
    int temp[size];
    int i = s, j = mid+1, k = 0;
    
    while(i<=mid && j<=e){
        if(a[i] < a[j]){
            temp[k] = a[i];
            k++;
            i++;
        }
        else{
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e){
        temp[k++] = a[j++];
    }
    
    for(int m = 0; m<size; m++){
        a[m + s] = temp[m];    
        
    }
    
}

void mergeSort(int a[], int s, int e){
    if(s<e){
    
        int mid = s + (e - s) / 2;
        
        mergeSort(a, s, mid);
        mergeSort(a, mid + 1, e);
        merge(a, s, mid, e);
        
    }
}

int main(){
    int n; cin>>n;

    int a[n];

    for(int i = 0; i<n; i++) cin>>a[i];

    mergeSort(a, 0, n - 1);
    
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}
