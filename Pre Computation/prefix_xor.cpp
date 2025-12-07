#include <bits/stdc++.h>
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

int32_t main() {

    int n; cin>>n;
   
    vector<int>v(n + 1);

    for(int i = 1; i<=n; i++) cin>>v[i];

    vector<int>p(n + 1);  //1 based indexing

    p[0] = 0;

    for(int i = 1; i<=n; i++){
       p[i] = p[i - 1] ^ v[i];
    }

    for(int i = 1; i<=n; i++){
       cout<<p[i]<<" ";
    }

    cout<<endl;

    
}
