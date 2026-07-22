#include<bits/stdc++.h>
using namespace std;

#define druto() ios::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define ff first
#define ss second
#define int long long
#define double long double
#define pb push_back
#define ll long long

const int mod = 1e9 + 7;

int32_t main(){
      
   druto();

   string s; cin>>s;

   // Generate the next lexicographical permutation of the string.

   bool flag = next_permutation(s.begin(), s.end());

   // If the next permutation exists, print it.
   // Otherwise, the current string is already the last permutation.
   if(flag){
      cout<<s<<endl;
   }
   else cout<<-1<<endl;


}
