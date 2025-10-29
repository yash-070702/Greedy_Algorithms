#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum=accumulate(nums.begin(),nums.end(),0.0);
        sum=(double)sum;
        int n=nums.size();
        int count=0;

        priority_queue<double>pq;

        for(int i=0;i<n;i++){
            pq.push((double)nums[i]);
        }        

        double half=sum/2.0;

        while(sum>half){
        double top=pq.top();
        pq.pop();
        top/=2;
        sum-=top;
        pq.push(top);
        count++;
        }
        return count;
    }
};