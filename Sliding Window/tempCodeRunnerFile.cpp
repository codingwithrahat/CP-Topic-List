#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    deque<int> dq; // store index only
    vector<int> ans;

    // for 1st window
    for (int i = 0; i < k; i++)
    {
        while (dq.size() > 0 && v[dq.back()] <= v[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    // for other window
    for (int i = k; i < n; i++)
    {
        ans.push_back(v[dq.front()]); // max of prev window

        // remove idx out of window
        while (dq.size() > 0 && dq.front() <= i - k)
        {
            dq.pop_front();
        }

        // maintain dec order
        while (dq.size() > 0 && v[dq.back()] <= v[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);
    }

    // max of last window
    ans.push_back(v[dq.front()]);

    for(auto &u : ans) cout<<u<<" ";

    cout<<endl;
}