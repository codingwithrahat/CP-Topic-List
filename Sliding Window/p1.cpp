//Find the maximum sum of a subarray of size k

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k; cin>>n>>k;

    vector<int>v(n);

    for(int i = 0; i<n; i++) cin>>v[i];

    int curSum = 0;

    for(int i = 0; i<k; i++){
        curSum += v[i];
    }

    int mxSum = curSum;

    for(int i = 1; i<=n - k; i++){
        curSum = curSum - v[i - 1] + v[i + k - 1];
        if(curSum > mxSum){
            mxSum = curSum;
        }
    }

    cout<<mxSum<<endl;

}
