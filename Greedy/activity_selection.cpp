#include <bits/stdc++.h>
using namespace std;

int activitySelection(vector<int> &start, vector<int> &finish)
{

    if(start.empty()) return 0;

    vector<pair<int, int>> v(start.size());

    for (int i = 0; i < start.size(); i++)
    {
        v[i].first = finish[i];
        v[i].second = start[i];
    }

    sort(v.begin(), v.end());

    int curEnd = v[0].first;
    int cnt = 1;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].second > curEnd)
        {
            curEnd = v[i].first;
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    cout<<activitySelection(start, end)<<endl; //4
}