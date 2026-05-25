#include<bits/stdc++.h>
using namespace std;

int knapsack(int cap, vector<int>&val, vector<int>&wt, int n, vector<vector<int>>&memo){
    
    if(n == 0 || cap == 0) return 0;

    if(memo[n][cap] != -1) return memo[n][cap];

    int take = 0;

    if(wt[n - 1] <= cap){
        take = val[n  - 1] + knapsack(cap - wt[n - 1], val, wt, n - 1, memo);
    }

    int notTake = knapsack(cap, val, wt, n - 1, memo);

    return memo[n][cap] = max(take, notTake);
}

int main(){
    vector<int> val = {10, 20, 30};
    vector<int> wt = {1, 1, 1};

    int cap = 2;

    int n = val.size();
    int w = wt.size();


    vector<vector<int>> memo(n + 1, vector<int>(cap + 1, -1));

    cout<<knapsack(cap, val, wt, n, memo)<<endl;
}