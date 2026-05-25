#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){

   vector<int>v = {1, 2, 3, 4};

   sort(v.begin(), v.end(), cmp);

   for(auto &u : v) cout<<u<<" ";  //4 3 2 1


}
