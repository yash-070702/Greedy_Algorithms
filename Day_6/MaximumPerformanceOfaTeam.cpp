#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>>arr;
        priority_queue<int,vector<int>,greater<int>>pq;
        long long ans=0;
        long long sum=0;
        int MOD=1e9+7;

        for(int i=0;i<n;i++){
           arr.push_back({efficiency[i],speed[i]});
        }

        sort(arr.rbegin(),arr.rend());


        for(auto it : arr){
            int eff=it.first;
            int sp=it.second;

            sum+=sp;
            pq.push(sp);

            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
            ans=max(ans,sum*eff);
        }
        return ans%MOD;
    }
};