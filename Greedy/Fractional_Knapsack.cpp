#include<bits/stdc++.h>
using namespace std;

//TC - O(nlogn)
//SC - O(n)

int main(){
    vector<int>val = {60, 100, 120};
    vector<int>wt = {10, 20, 30};

    int cap = 50;

    vector<pair<double, pair<int, int>>>ratio;

    for(int i = 0; i<val.size(); i++){
        double d = (double)val[i] / wt[i];

        ratio.push_back({d, {val[i], wt[i]}});
    }

    sort(ratio.rbegin(), ratio.rend());  

    double total = 0;

    for(auto &u : ratio){
        int v = u.second.first;
        int w = u.second.second;

        if(cap >= w){
            total += v;
            cap -= w;
        }else{
            total += u.first * cap;
            break;
        }
    }

    cout<<fixed << setprecision(6) << total <<endl;

}