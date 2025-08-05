#include<bits/stdc++.h>
using namespace std;

int find_mex(vector<int> & v){
    unordered_set<int>st(v.begin(), v.end());

    //tc of st.count() is average O(1), worst case O(n)
    //if unordered set
    //but in ordered set O(logn)

    int mex = 0;
    while(st.count(mex)){
        mex++;
    }
    return mex;
}

int main(){
    vector<int>v = {0, 1, 2, 3, 7}; //mex is 4   
    cout<<find_mex(v)<<endl;

}
