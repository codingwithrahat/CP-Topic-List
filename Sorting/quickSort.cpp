#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h) {
    int piv = a[l];
    int s = l, e = h;

    while (s < e) {
        while (a[s] <= piv) s++;
        while (a[e] > piv) e--;

        if (s < e) swap(a[s], a[e]);
    }

    swap(a[l], a[e]);
    return e;
}

void quickSort(int a[], int l, int h) {
    if (l < h) {
        int e = partition(a, l, h);

        quickSort(a, l, e - 1);
        quickSort(a, e + 1, h);
    }
}

int main(){
    int n; cin>>n;

    int a[n];

    for(int i = 0; i<n; i++) cin>>a[i];

    quickSort(a, 0, n - 1);
    
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}
