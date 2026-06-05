#include<bits/stdc++.h>
using namespace std;

int lcs(string &s1, string &s2, int sz, int sz2){
    if(sz < 0 || sz2 < 0) return 0;

    if(s1[sz] == s2[sz2]){
        return 1 + lcs(s1, s2, sz - 1, sz2 - 1);
    }

    int a = lcs(s1, s2, sz - 1, sz2);
    int b = lcs(s1, s2, sz, sz2 - 1);

    return max(a, b);

}

int main(){
    string s1 = "abcdefgh";
    string s2 = "adekgh";

    cout<< lcs(s1, s2, s1.size() - 1, s2.size() - 1) <<endl;
}