#include<bits/stdc++.h>
using namespace std;

int lis(vector<int>&v, int i){

    if(i == 0) return 1; //no need

    int mx = 1;

    for(int j = 0; j<i; j++){
        if(v[j] < v[i]){
            mx = max(mx, lis(v, j) + 1);
        }
    }

    return mx;
}

int main(){
    vector<int> v = {0, 1, 0, 3, 2, 3};
    //longest increaseing subsequence 0 1 2 3

    int n = v.size();

    int ans = INT_MIN;

    for(int i = 0; i<n; i++){
        ans = max(ans, lis(v, i));
    }

    cout<<ans<<endl;

}