#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "abcdefgh";
    string s2 = "adekgh";

    int sz = s1.size();
    int sz2 = s2.size();

    vector<vector<int>>dp(sz + 1, vector<int>(sz2 + 1, 0));


    for(int i = 1; i<=sz; i++){
        for(int j = 1; j<=sz2; j++){
            if(s1[i - 1] == s2[j - 1]){
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout<<dp[sz][sz2]<<endl;
}