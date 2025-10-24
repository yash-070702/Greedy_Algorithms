#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(pair<int,int>& a, pair<int,int>& b) {
        if (a.second != b.second)
            return a.second > b.second;  
        return a.first < b.first;       
    }

    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        vector<pair<int,int>> jobs;
        int n = profit.size();

        for (int i = 0; i < n; i++) {
            jobs.push_back({deadline[i], profit[i]});
        }

        sort(jobs.begin(), jobs.end(), cmp);

        int maxDeadline = 0;
        for (auto &job : jobs)
            maxDeadline = max(maxDeadline, job.first);

        vector<int> slot(maxDeadline + 1, -1); 

        int count = 0, sum = 0;

        for (int i = 0; i < n; i++) {
            int d = jobs[i].first;
            for (int j = d; j > 0; j--) { 
                if (slot[j] == -1) {
                    slot[j] = jobs[i].second;
                    count++;
                    sum += jobs[i].second;
                    break;
                }
            }
        }

        return {count, sum};
    }
};