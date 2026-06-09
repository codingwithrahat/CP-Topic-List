#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {0, 1, 0, 3, 2, 3};
    //longest increaseing subsequence 0 1 2 3

    int n = v.size();

    vector<int>dp(n, 1);

    for(int i = 1; i<n; i++){
        for(int j = 0; j < i; j++){
            if(v[j] < v[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int ans = *max_element(dp.begin(), dp.end());

    cout<<ans<<endl;


}