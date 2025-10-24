#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    static bool cmp(pair<int,int>&a , pair<int,int>&b){
        if(a.second==b.second)
        return a.first<b.first;
        
        return a.second<b.second;
            } 
     
    int maxMeetings(vector<int>& start, vector<int>& end) {
     vector<pair<int,int>>arr;
     int n=start.size();
     
     for(int i=0;i<n;i++){
     arr.push_back({start[i],end[i]});  
     }
     sort(arr.begin(),arr.end(),cmp);
     
     int count=0;
     int endTime=-1;
     

     for(int i=0;i<n;i++){
         if(endTime<arr[i].first){
             endTime=arr[i].second;
             count++;
         }
     }
     return count;
    }
};
