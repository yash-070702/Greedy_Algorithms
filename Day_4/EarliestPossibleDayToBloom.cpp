#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    static bool cmp(pair<int,int>&a, pair<int,int>&b){
        if(a.second==b.second)
        return a.first<b.first;

        return a.second>b.second;
      } 

    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
     vector<pair<int,int>>mp;
     int n=plantTime.size();

     int count=0;
     int days=-1;
     priority_queue<int>pq;

     for(int i=0;i<n;i++){
        mp.push_back({plantTime[i],growTime[i]});
     }

     sort(mp.begin(),mp.end(),cmp);

     while(count<n){
        auto couple=mp[count];
        int time=couple.first;
        int plant=couple.second;

        days+=time;
        pq.push(days+plant+1);
        count++;
     }
     return pq.top();
    }
};