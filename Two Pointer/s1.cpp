//Find the pair whose sum is equal to x

#include<bits/stdc++.h>
using namespace std;

int val1, val2;

bool solve(vector<int>&v, int x, int n){ //tc - O(n)
    int i = 0;
    int j = n - 1;

    while(i < j){
        int sum = v[i] + v[j];
        if(sum == x){
            val1 = v[i];
            val2 = v[j];
            return true;
        }    
        else if(sum > x) j--;
        else i++;
    }
    return false;
}

int main(){
    int n; cin>>n;
    vector<int>v(n);

    for(int i = 0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end()); //tc - O(nlogn)

    int x; cin>>x;

    bool ans = solve(v, x, n);

    if(ans){
        cout<<"YES\n"<<"Value: "<<val1<<" "<<val2<<endl;
    }
    else cout<<"NO\n";
}

//total tc - O(nlogn)
