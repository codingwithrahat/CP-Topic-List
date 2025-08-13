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

int bin_to_dec(string s){
  
  int power = 1, n = 0;
  
  for(int i = s.size() - 1; i>= 0; i--){
    
    if(s[i] == '1'){
      n += power;
    }
    power *= 2;
  }
  
  return n;
}

int32_t main(){

    druto();

    // int t; cin>>t;
    // while(t--){
      string s; cin>>s;
      
      int n = bin_to_dec(s);
      
      cout<<n<<endl;
      
    // }
}
