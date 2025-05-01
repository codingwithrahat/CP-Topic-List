#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];
int tree[N * 4];


void init(int node, int s, int e){
    if(s == e){
        tree[node] = a[s];
        return;
    }

    int left = node * 2;
    int right = node * 2 + 1;

    int mid = (s + e) / 2;

    init(left, s, mid);
    init(right, mid + 1, e);

    tree[node] = tree[left] + tree[right];



}

int main(){

    int n; cin>>n;

    for(int i = 1; i<=n; i++){
        cin>>a[i];
    }

    init(1, 1, n);

    cout<<tree[1]<<endl;  

}
