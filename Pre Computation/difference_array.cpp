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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define deci(x) cout << fixed << setprecision(x);

const int INF = 1e18;
const int mod = 1e9 + 7;

int32_t main(){

   druto();

   int n, q; cin>>n>>q;

   vector<int>v(n);

   for(int i = 0; i<n; i++){
   		cin>>v[i];
   }

   vector<int>diff(n + 1, 0);

   while(q--){
   		int l, r, val; cin>>l>>r>>val;

   		l--;
   		r--;

   		diff[l] += val;
   		diff[r + 1] -= val;

   }

   for (int i = 1; i < n + 1; i++){
   		diff[i] += diff[i - 1];
   }

   for(int i = 0; i<n; i++){
   		v[i] += diff[i];
   }

   for(auto &u : v) cout<<u<<" ";
   cout<<endl;

}   


// input
// 5 3
// 1 2 3 4 5
// 1 3 10
// 2 5 20
// 3 4 -5


// output
// 11 32 28 19 25