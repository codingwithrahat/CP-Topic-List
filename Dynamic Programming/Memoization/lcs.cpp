#include<bits/stdc++.h>
using namespace std;

int lcs(string &s1, string &s2, int sz, int sz2, vector<vector<int>>&memo){
    if(sz < 0 || sz2 < 0) return 0;

    if(memo[sz][sz2] != -1) return memo[sz][sz2];

    if(s1[sz] == s2[sz2]){
        return memo[sz][sz2] = 1 + lcs(s1, s2, sz - 1, sz2 - 1, memo);
    }

    int a = lcs(s1, s2, sz - 1, sz2, memo);
    int b = lcs(s1, s2, sz, sz2 - 1, memo);

    return memo[sz][sz2] = max(a, b);

}

int main(){
    string s1 = "abcdefgh";
    string s2 = "adekgh";

    vector<vector<int>>memo(s1.size() , vector<int>(s2.size(), -1));

    cout<< lcs(s1, s2, s1.size() - 1, s2.size() - 1, memo) <<endl;
}