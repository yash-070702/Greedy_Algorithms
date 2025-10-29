#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    static bool cmp(pair<int,int>&a , pair<int,int>&b){
        if(a.second==b.second)
        return a.first<b.first;
        
        return a.second<b.second;
    }
     
    int activitySelection(vector<int> &start, vector<int> &finish) {
    
    int n=start.size();
    int count=0;
    vector<pair<int,int>>arr;
    
    for(int i=0;i<n;i++){
        arr.push_back({start[i],finish[i]});
    }
    
    sort(arr.begin(),arr.end(),cmp);
    
    int endTime=-1;
    
    for(int i=0;i<n;i++){
        if(arr[i].first>endTime){
            count++;
            endTime=arr[i].second;
        }
    }
        return count;
    }
};