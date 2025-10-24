#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        int i=0;
    
        vector<vector<int>>merged;

        while(i<n && intervals[i][1]<newInterval[0]){
        merged.push_back(intervals[i]);
        i++;
        }
 
       

        while(i<n && intervals[i][0]<=newInterval[1]){
         newInterval={min(intervals[i][0],newInterval[0]),max(intervals[i][1],newInterval[1])};
        i++;
        }
      
        merged.push_back(newInterval);

        while(i<n){
            merged.push_back(intervals[i]);
            i++;
        }

return merged;

    }
};