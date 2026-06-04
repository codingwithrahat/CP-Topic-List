//given an array consisting of 0s, 1s ans 2s
//sort it without using sorting 
//in one traversal

#include<bits/stdc++.h>
using namespace std;

void sortDNF(vector<int>&v){
    int low = 0, mid = 0, high = v.size() - 1;

    while(mid <= high){
        if(v[mid] == 0){
            swap(v[low], v[mid]);
            low++;
            mid++;
        }else if(v[mid] == 1){
            mid++;
        }else{
            swap(v[high], v[mid]);
            high--;
        }
    }
}

int main(){
    vector<int> v = {2 , 2 , 0, 1 , 1, 0};

    sortDNF(v);

    for(auto &u : v) cout<<u<<" ";
    cout<<endl;
}