#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 11;
    vector<int>coins = {1, 5, 7};

    vector<int>dp(sum + 1, INT_MAX);

    dp[0] = 0;

    for(int i = 0; i<coins.size(); i++){
        for(int j = coins[i]; j<=sum; j++){
            if(dp[j - coins[i]] != INT_MAX){
                dp[j] = min(dp[j], 1 + dp[j - coins[i]]);
            }
        }
    }

    cout<<dp[sum]<<endl;
}