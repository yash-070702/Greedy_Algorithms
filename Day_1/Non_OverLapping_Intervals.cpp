#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    static bool cmp(vector<int>&a , vector<int>&b){
        if(a[1]==b[1])
        return a[0]<b[0];

        return a[1]<b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       int count=0;
       int endTime=INT_MIN;
       sort(intervals.begin(),intervals.end(),cmp);

       for(auto it : intervals){
        if(it[0]>=endTime)
        {
            count++;
            endTime=it[1];
        }
       }
     return intervals.size()-count;
    }
};