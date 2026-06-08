#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> w = {3, 2, 4, 5, 1};
    vector<int> p = {50, 40, 70, 80, 10};

    int cap = 7;

    int item = w.size();

    vector<vector<int>>dp(item + 1, vector<int>(cap + 1));

    //TC - O(item * cap)

    for(int i = 0; i<=item; i++){
        for(int j = 0; j<=cap; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }else{
                
                if(j < w[i - 1]){
                    dp[i][j] = dp[i - 1][j];   //not pick the item
                }
                else{
                    dp[i][j] = max(dp[i - 1][j], dp[i -1][j - w[i - 1]] + p[i - 1]);
                    //max (notpick, pick);
                }
            }
        }
    }

    cout<<dp[item][cap]<<endl; //120
}