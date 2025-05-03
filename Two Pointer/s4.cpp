//Find all triplets with zero sum

#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n){
    for(int i = 0; i<n; i++){
        unordered_set<int>st;

        for(int j = i + 1; j < n; j++){
            int sum = -(a[i] + a[j]);
            if(st.find(sum) != st.end()){
                cout<<sum<<" "<<a[i]<<" "<<a[j]<<endl;
            }else{
                st.insert(a[j]);
            }
            
        }
    }
}

int main(){
    int n; cin>>n;

    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];

    solve(a, n);
}
