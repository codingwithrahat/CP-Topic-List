#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, string> mp = {{1, "Rahat"}, {2, "Rakib"}};

    mp.clear(); //O(n);

    cout<<mp.empty()<<endl; //1
}