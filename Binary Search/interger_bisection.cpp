// problem link 
// https://www.spoj.com/problems/MATHLOVE/

//Way 01

#include <bits/stdc++.h>
using namespace std;
 
long long get(long long n){
    return (n * (n + 1)) /2;
}
 
int main() {
    long long t; cin >> t;
    
    while (t--) {
        long long k; cin >> k;
        
        long long l = 0, e = 1e5, ans = -1;
        
        while (l <= e) {
            long long mid = (l + e) / 2;
            
            long long sum = get(mid);
            if (sum == k) {
                ans = mid;
                break;
            } else if (sum > k) {
                e = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        
        if (ans == -1) cout << "NAI\n";
        else cout << ans << endl;
    }
}


//Way 02

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


int get(int n){
  return (n * (n + 1)) / 2;
}

int32_t main(){

    druto();
    
    int N = 1e5 + 5;
    
    vector<int>v(N);
    
    for(int i = 1; i<N; i++){
      v[i] = get(i);
    }

    int t; cin>>t;
    while(t--){
        int y; cin>>y;
        
        int l = 0, r = N - 1, ans = -1;
        
        while(l <= r){
          int mid = l + (r - l) / 2;
          
          if(v[mid] == y){
            ans = mid;
            break;
          }else if(v[mid] < y){
            l = mid + 1;
          }else{
            r = mid - 1;
          }
        }
        
        if(ans != -1) cout<<ans<<endl;
        else cout<<"NAI\n";
     
        
    }
    
    
}
