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

   bool flag = next_permutation(s.begin(), s.end());

   if(flag){
      cout<<s<<endl;
   }
   else cout<<-1<<endl;


}
