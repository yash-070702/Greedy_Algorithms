#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        
        long long sum=0;
        int minWaste=INT_MAX;
        int count=0;

        for(int it : nums){
            if((it^k)>it){
                count++;
                sum+=(it^k);
            }

            else{
                sum+=it;
            }

            minWaste=min(minWaste,abs((it^k)-it));
        }

        if(count&1)
        return sum-minWaste;

        return sum;
    }
};