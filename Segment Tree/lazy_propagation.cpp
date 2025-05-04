#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];

struct info{
    long long prop;
    long long sum;

} tree[N * 4];


void init(int node, int s, int e){

    if(s == e){
        tree[node].sum = a[s];
        return;
    }

    int left = 2 * node;
    int right = 2 * node + 1;

    int mid = (s + e) / 2;

    init(left, s, mid);
    init(right, mid + 1, e);

    tree[node].sum = tree[left].sum + tree[right].sum;
}

void update(int node, int s, int e, int i, int j, int x){

    if(s > j || e < i){
        return;
    }
    if(s >= i && e <= j){
        tree[node].sum = tree[node].sum + ((e - s + 1) * x);
        tree[node].prop = tree[node].prop + x;
        return;
    }

    int left = node * 2;
    int right = node * 2 + 1;

    int mid = (s + e) / 2;

    update(left, s, mid, i, j, x);
    update(right, mid + 1, e, i, j, x);

    tree[node].sum = tree[left].sum + tree[right].sum + ((e - s + 1) * tree[node].prop);
}
long long query(int node, int s, int e, int i, int j, long long carry = 0){

    if(s > j || e < i){
        return 0;
    }
    if(s >= i && e <= j){
        return tree[node].sum + (carry * (e - s + 1));
    }

    int left = node * 2;
    int right = node * 2 + 1;

    int mid = (s + e) / 2;

    long long p1 = query(left, s, mid, i, j, carry + tree[node].prop);
    long long p2 = query(right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}


int main(){
    int n; cin>>n;

    for(int i = 1; i<=n; i++){
        cin>>a[i];
    }

    init(1, 1, n);
    update(1, 1, n, 1, 7, 2);
    update(1, 1, n, 1, 4, 3);

    cout<<query(1, 1, n, 1, 3)<<endl;


    
}
