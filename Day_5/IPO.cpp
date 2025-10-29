#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
  
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        int ind=0;
     
             vector<pair<int,int>>mp;
        priority_queue<int>pq;

        for(int i=0;i<n;i++){
        mp.push_back({capital[i],profits[i]});
        }

        sort(mp.begin(),mp.end());

        for(int i=0;i<k;i++){
        while(ind<n && mp[ind].first<=w){
            pq.push(mp[ind].second);
            ind++;
        }

        if(pq.empty())
        break;

        w+=pq.top();
        pq.pop();
        }

        return w;
    }
};