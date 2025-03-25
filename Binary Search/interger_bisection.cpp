// problem link 
// https://www.spoj.com/problems/MATHLOVE/

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
