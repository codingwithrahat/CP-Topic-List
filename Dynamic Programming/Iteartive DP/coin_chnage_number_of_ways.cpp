#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 9;
    vector<int>coins = {2, 3, 5};

    // 2+2+5 and 2+5+2 and 5+2+2 all will be count 1

    vector<int>dp(sum + 1, 0);

    dp[0] = 1;

    for(int i = 0; i<coins.size(); i++){
        for(int j = coins[i]; j<=sum; j++){
            dp[j] = dp[j] + dp[j - coins[i]];
        }
    }

    cout<<dp[sum]<<endl;

}