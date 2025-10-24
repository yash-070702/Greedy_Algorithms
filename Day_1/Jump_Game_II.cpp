#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     
    //<=======DP USING MEMORIZATION========>


    // int n;
    // vector<int>dp;
    // int solve(int ind, vector<int>&nums){
    // if(ind==n-1)
    // return 0;

    // if(ind>=n)
    // return INT_MAX;

    // if(dp[ind]!=-1)
    // return dp[ind];

    // int count=INT_MAX;
    //  for (int i = 1; i <= nums[ind]; i++) {
    //         int next = solve(ind + i, nums);
    //         if (next != INT_MAX)
    //             count = min(count, 1+next);
    //     }
    //     return dp[ind]=count;
    // }

    // int jump(vector<int>& nums) {
    //     n=nums.size();
    //     dp.assign(n,-1);
    //     return solve(0,nums);
    // }


    //<======GREEDY APPROACH=======>

    int jump(vector<int>&arr){
        int n=arr.size();

        int left=0;
        int right=0;
        int jump=0;
        
        if(n==1)
        return 0;

        while(right<n-1){
        int maxi=0;
     

        for(int i=left;i<=right;i++){
            maxi=max(maxi,i+arr[i]);
        }

            left=right+1;
            right=maxi;

            jump++;
        }
        return jump;
    }
};