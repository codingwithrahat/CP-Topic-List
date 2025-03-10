#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int s, int mid, int e) {
    int n1 = mid - s + 1;
    int n2 = e - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) 
        L[i] = a[s + i];
    for (int i = 0; i < n2; i++) 
        R[i] = a[mid + 1 + i];

    int i = 0, j = 0, k = s;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
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
