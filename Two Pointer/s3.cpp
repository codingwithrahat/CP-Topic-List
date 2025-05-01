//Find the Closest Pair from Two Sorted Arrays Whose Sum is Closest to X

#include<bits/stdc++.h>
using namespace std;

int val1, val2;

void solve(vector<int>&a, vector<int>&b, int x, int n, int m){ //tc - O(n)
    int i = 0;
    int j = m - 1;

    int diff = INT_MAX;
    while(i < n && j >= 0){
        int sum = a[i] + b[j];
        if(abs(sum - x) < diff){
            val1 = a[i];
            val2 = b[j];
            diff = abs(sum - x); 
        } 

        if(sum > x) j--;
        else i++;
    }

}

int main(){
    int n, m; cin>>n>>m;
    vector<int>v(n);
    vector<int>v2(m);

    for(int i = 0; i<n; i++) cin>>v[i];
    for(int i = 0; i<m; i++) cin>>v2[i];

    int x; cin>>x;

    solve(v, v2, x, n, m);

    cout<<val1<<" "<<val2<<endl;

    
}

//total tc - O(n)
