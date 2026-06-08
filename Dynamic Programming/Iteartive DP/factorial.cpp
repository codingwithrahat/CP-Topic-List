#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;

    vector<int>dp(n + 1, 1);

    for(int i = 2; i<=n; i++){
        dp[i] = i * dp[i - 1];
    }

    cout<<dp[n]<<endl; //120
}