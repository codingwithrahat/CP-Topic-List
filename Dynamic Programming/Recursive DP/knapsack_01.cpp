#include<bits/stdc++.h>
using namespace std;

int knapsack(int cap, vector<int>&val, vector<int>&wt, int n){
    
    if(n == 0 || cap == 0) return 0;

    int take = 0;

    if(wt[n - 1] <= cap){
        take = val[n  - 1] + knapsack(cap - wt[n - 1], val, wt, n - 1);
    }

    int notTake = knapsack(cap, val, wt, n - 1);

    return max(take, notTake);
}

int main(){
    vector<int> val = {10, 20, 30};
    vector<int> wt = {1, 1, 1};

    int cap = 2;

    int n = val.size();

    cout<<knapsack(cap, val, wt, n)<<endl;
}