//Find the maximum sum of a subarray of size k

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

   int n,k; cin>>n>>k;

   vector<int>v(n);

   for(int i = 0; i<n; i++) cin>>v[i];

   int curSum = 0;

   for(int i = 0; i<k; i++){
      curSum += v[i];
   }

   int maxSum = INT_MIN;

   for(int i = k; i<n; i++){
      
      curSum = curSum + v[i] - v[i - k];
       
      maxSum = max(curSum, maxSum);
   }

   cout<<maxSum<<endl;

}

// brute force

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

   int n,k; cin>>n>>k;

   vector<int>v(n);

   for(int i = 0; i<n; i++) cin>>v[i];

   int maxSum = INT_MIN;

   for(int i = 0; i<=n - k; i++){
      int sum = 0;
      for(int j = i; j < i + k; j++){
         sum += v[j];
      }
      maxSum = max(sum, maxSum);
   }

   cout<<maxSum<<endl;

}
