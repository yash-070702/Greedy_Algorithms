#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    priority_queue<int,vector<int>,greater<int>>pq;
    int n=intervals.size();

    for(int i=0;i<n;i++){
        if(!pq.empty()){
            if(intervals[i][0]>pq.top()){
                pq.pop();
                pq.push(intervals[i][1]);
            }
            else
            pq.push(intervals[i][1]);
        }
        else{
            pq.push(intervals[i][1]);
        }
    }
   return pq.size();
    }
};