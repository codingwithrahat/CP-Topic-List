#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1, 2, 3, 4, 5};

    //O(1)
    cout<<*v.begin()<<endl; //1 (v.begin() returns an iterator pointing to the first element.)

    vector<int> ::iterator it = v.begin();  

    cout<<*it<<endl; //1
    cout<<*(it + 1)<<endl; //2

    //O(n)
    for(it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // For vector, both it++ and it + 1 move to the next element
    // because vector provides random access iterators (contiguous storage).

    // For set and map, it++ works,
    // but it + 1 is NOT allowed because they are not random access iterators.

    // it++ moves the iterator to the next element.
    // it + 1 returns a new iterator one position ahead (original iterator unchanged).



    vector<pair<int, int>>vp = {{1, 2}, {3, 4}};
    vector<pair<int, int>> ::iterator it2;

    for(it2 = vp.begin(); it2 != vp.end(); it2++){
        cout<<(*it2).first<<" "<<(*it2).second<<endl;
    }
    cout<<endl;
   
    for(it2 = vp.begin(); it2 != vp.end(); it2++){
        //another way
        cout<<it2->first<<" "<<it2->second<<endl;
    }
    cout<<endl;  


}