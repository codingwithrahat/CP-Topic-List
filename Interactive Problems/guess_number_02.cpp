//https://codeforces.com/gym/101021/problem/1

#include<bits/stdc++.h>
using namespace std;

#define druto() ios::sync_with_stdio(false);cin.tie(NULL)
// #define endl '\n'
#define ff first
#define ss second
#define int long long
#define double long double
#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define deci(x) cout << fixed << setprecision(x);

const int INF = 1e18;
const int mod = 1e9 + 7;


int32_t main(){

   druto();
   int l = 1, r = 1e6, ans = -1;


   while(l <= r){
      int mid = l + (r - l) / 2;

      cout<<mid<<endl;

      string s; cin>>s;

      if(s == "<"){
         r = mid - 1;
      }else{
          ans = mid;
         l = mid + 1;
      }
      

        
   }

   cout<<"! "<<ans<<endl;

   


}
