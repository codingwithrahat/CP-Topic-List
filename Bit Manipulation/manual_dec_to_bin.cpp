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

string dec_to_bin(int n){
  
  string s;
  int cnt = 0, r;
  
  while(n > 0){
    
    r = n % 2;
    
    s.pb(r + '0');
    
    n /= 2;
    
  }
  
  return s;
}

int32_t main(){

    druto();

    // int t; cin>>t;
    // while(t--){
      int n; cin>>n;
      
      string s = dec_to_bin(n);
      
      reverse(s.begin(), s.end());
      
      cout<<s<<endl;
      
    // }
}
