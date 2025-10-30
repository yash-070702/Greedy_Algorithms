#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long n=nums.size();
        long long sum=0;
        long long count=0;
        long long ans=-1;

        if(n<3)
        return -1;

        priority_queue<int,vector<int>,greater<int>>pq;

        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }

        
        while(!pq.empty()){
        int top=pq.top();
        pq.pop();
        if(count>=2 && sum>top)
        {
            ans=sum+top;
        }
         sum+=top;
         count++;
        }
        
        return ans;
    }
};