#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wages, int k) {
    vector<pair<double,int>>workers;
    int n=wages.size();

    for(int i=0;i<n;i++){
        workers.push_back({(double)wages[i]/quality[i],quality[i]});
    }

    sort(workers.begin(),workers.end());

    priority_queue<int>pq;
    int quality_sum=0;

    for(int i=0;i<k;i++){
        pq.push(workers[i].second);
        quality_sum+=workers[i].second;
    }

    double mangerRatio=workers[k-1].first;
    double result=mangerRatio*quality_sum;

    for(int i=k;i<n;i++){
        pq.push(workers[i].second);
        quality_sum+=workers[i].second;
        mangerRatio=workers[i].first;

        if(pq.size()>k){
            quality_sum-=pq.top();
            pq.pop();
        }
        result=min(result,mangerRatio*quality_sum);
    }
 return result;

        }
};