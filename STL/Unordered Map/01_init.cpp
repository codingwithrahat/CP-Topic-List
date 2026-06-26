#include<bits/stdc++.h>
using namespace std;

// Unordered map
// Not sorted
// Implemented using hash table
// Elements are NOT stored contiguously in memory.
// Only ++it and --it are allowed.


int main(){

    //{key, value}

    //way - 1
    unordered_map<int, string>mp = {{1, "rahat"}, {2, "rakib"}};

    
    //way -2
    unordered_map<int, string>m;


    m[1] = "rahat";
    m[5] = "rakib";



    //way - 3
    unordered_map<int, string>m2;


    m2.insert({1, "rahat"});

    // Insertion:
    // Average Case: O(1)
    // Worst Case: O(n)
    // Most of the time: O(1)



    
    unordered_map<string, string>ms;

    ms["abc"] = "Rahat";  
    // Average: O(key length)
    // Worst: O(n * key length)

    



    //some key are not allow in unordered map 
    //unordered_map<pair<int, int>, string>m , not allow
    map<pair<int, int>, string>mo; // allow in map



}