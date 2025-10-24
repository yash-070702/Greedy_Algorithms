#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    static bool cmp(vector<int>& a, vector<int>& b){
        if (a[0] == b[0]) 
            return a[1] > b[1];   
        return a[0] < b[0];      
    }


    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int i=1;
        sort(intervals.begin(),intervals.end(),cmp);

        for(auto it : intervals){
            cout<<it[0]<<" "<<it[1]<<endl;
        }

        int start=intervals[0][0];
        int end=intervals[0][1];
        int n=intervals.size();
        int count=1;

        while(i<n){
            if(intervals[i][0]>=start && intervals[i][1]<=end){
            i++;
            continue;
            }

            else{
                count++;
                start=intervals[i][0];
                end=intervals[i][1];
            }
         i++;
        }
        return count;
    }
};