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

    tree[node] = max(tree[left], tree[right]);



}

int query(int node, int s, int e, int i, int j){



    if(e < i || s > j) return INT_MIN;
    if(s >= i && e <= j) return tree[node];

    int left = node * 2;
    int right = node * 2 + 1;

    int mid = (s + e) / 2;

    int s1 = query(left, s, mid, i, j);
    int s2 = query(right, mid + 1, e, i, j);

    return max(s1,s2); 


}

int main(){

    int n; cin>>n;

    for(int i = 1; i<=n; i++){
        cin>>a[i];
    }

    init(1, 1, n);

    int t; cin>>t;

    while(t--){
        int a, b; cin>>a>>b;

        int s = query(1, 1, n, a, b);

        cout<<s<<endl;
    }
     

}
