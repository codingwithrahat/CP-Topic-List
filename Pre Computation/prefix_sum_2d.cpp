// given 2d array,  give q queiries and in each query given a, b, c, d
// print sum of square represent by (a, b) as top left square 
// and (c, d) as bottom right point

//tc - O(n * n)

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

   int n; cin>>n;
   vector<vector<int>>v(n + 1, vector<int>(n + 1));

   vector<vector<int>>p(n + 1, vector<int>(n + 1, 0));



   for(int i = 1; i<=n; i++){
      for(int j = 1; j<=n; j++){
         cin>>v[i][j];

         p[i][j] = v[i][j] + p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1];
      }
   }


   int q; cin>>q;

   while(q--){
      int a, b, c, d; cin>>a>>b>>c>>d;
      // a--;b--;c--;d--; 1 based indexing

      cout<<p[c][d] - p[a - 1][d] - p[c][b - 1] + p[a - 1][b - 1]<<endl;


   }

}


//tc - O(q * n ^ 2)

// #include<bits/stdc++.h>
// using namespace std;

// #define druto() ios::sync_with_stdio(false);cin.tie(NULL)
// #define endl '\n'
// #define ff first
// #define ss second
// #define int long long
// #define double long double
// #define pb push_back
// #define ll long long

// const int mod = 1e9 + 7;

// int32_t main(){
      
//    druto();

//    int n; cin>>n;
//    vector<vector<int>>v(n, vector<int>(n));



//    for(int i = 0; i<n; i++){
//       for(int j = 0; j < n; j++){
//          cin>>v[i][j];
//       }
//    }

//    int q; cin>>q;

//    while(q--){
//       int a, b, c, d; cin>>a>>b>>c>>d;
//       a--;b--;c--;d--;

//       int sum = 0;

//       for(int i = a; i<=c; i++){
//          for(int j = b; j<=d; j++){
//             sum += v[i][j];
//          }
//       }

//       cout<<sum<<endl; 


//    }

// }
