#include <bits/stdc++.h>
using namespace std;

vector<int> JobScheduling(vector<int>&deadline, vector<int>&profit, int n)
{

    vector<pair<int, int>> v(n);

    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        v[i].first = profit[i];
        v[i].second = deadline[i];

        mx = max(mx, profit[i]);
    }

    //sort the job based on profit
    //decreasing order
    sort(v.rbegin(), v.rend());

    vector<int> slot(mx + 1, -1);

    int cnt = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        int j = v[i].second;

        while (j >= 1)
        {
            if (slot[j] == -1)
            {
                slot[j] = 1;
                sum += v[i].first;
                cnt++;
                break;
            }
            j--;
        }
    }

    return {cnt, sum};
}

int main() {
    vector<int>deadline = {4, 1, 1, 1};
    vector<int>profit = {20, 10, 40, 30};

    vector<int>ans = JobScheduling(deadline, profit, profit.size());

    for(auto &u : ans) cout<<u<<" ";    //2 60
    cout<<endl;
}