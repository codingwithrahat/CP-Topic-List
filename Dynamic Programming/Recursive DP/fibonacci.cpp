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


int f(int n){
   if(n == 1) return 0;
   if(n == 2) return 1;

   return f(n - 1) + f( n - 2);

}

int32_t main(){
      
   druto();

   int n; cin>>n;

   cout<<f(n)<<endl;


}
