#include <bits/stdc++.h>
using namespace std;

vector<int> JobScheduling(vector<int>&deadline, vector<int>&profit, int n)
{

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        v[i].first = deadline[i];
        v[i].second = profit[i];
    }

    //sort the job based on deadline
    //ascending order
    sort(v.begin(), v.end());

    priority_queue<int , vector<int>, greater<int>>pq;  //min heap

    int cnt = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        pq.push(v[i].second);

        if(pq.size() > v[i].first){
            pq.pop(); //remove the minimum
        }
    }

    while(!pq.empty()){
        sum += pq.top();
        cnt++;
        pq.pop();
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