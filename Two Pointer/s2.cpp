//Find the pair in Array Whose sum is closest to X

#include<bits/stdc++.h>
using namespace std;

int val1, val2;

void solve(vector<int>&a, int x, int n){
    int i = 0;
    int j = n - 1;

    int diff = INT_MAX;
    while(i < j){
        int sum = a[i] + a[j];
        if(abs(sum - x) < diff){
            val1 = a[i];
            val2 = a[j];
            diff = abs(sum - x); 
        } 

        if(sum > x) j--;
        else i++;
    }

}

int main(){
    int n; cin>>n;
    vector<int>v(n);

    for(int i = 0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end()); //tc - O(nlogn)

    int x; cin>>x;

    solve(v, x, n);

    cout<<val1<<" "<<val2<<endl;

    
}

//total tc - O(nlogn)
