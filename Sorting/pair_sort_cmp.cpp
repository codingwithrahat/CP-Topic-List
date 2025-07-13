#include<bits/stdc++.h>
using namespace std;

#define optimize() ios::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

bool cmp(pair<int, int> a, pair<int, int>b){
    if(a.first == b.first){
        return a.second > b.second; //Descending by second, if first two are equal
    }

    return a.first < b.first; //ascending by first
}


int main(){

    optimize();

    int n; cin>>n;

    vector<pair<int, int>>v(n);

    for(int i = 0; i<n; i++) cin>>v[i].first>>v[i].second;

    sort(v.begin(), v.end(), cmp);

    for(auto &u : v) cout<<u.first<<" "<<u.second<<endl;

}sort
