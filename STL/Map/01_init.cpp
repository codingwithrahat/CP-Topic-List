#include<bits/stdc++.h>
using namespace std;

// Ordered map
// Stores elements sorted by key (ascending order by default).
// Implemented using a Red-Black Tree.
// Elements are NOT stored contiguously in memory.
// Only ++it and --it are allowed.


int main(){

    //{key, value}

    //way - 1
    map<int, string>mp = {{1, "rahat"}, {2, "rakib"}};

    
    //way -2
    map<int, string>m;

    //O(logn)
    m[1] = "rahat";
    m[5] = "rakib";



    //way - 3
    map<int, string>m2;

    //O(logn)
    m2.insert({1, "rahat"});


    //but not always O(logn)
    map<string, string>ms;

    ms["abc"] = "Rahat";   //O(string size * logn) or O(key length * logn)



}