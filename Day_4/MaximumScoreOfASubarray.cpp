#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        int left = k, right = k;
        int minVal = nums[k];
        int ans = nums[k];

       
        while (left > 0 || right < n - 1) {
        
            if (left == 0)
                right++;
            else if (right == n - 1)
                left--;
            else if (nums[left - 1] > nums[right + 1])
                left--;
            else
                right++;

            
            minVal = min({minVal, nums[left], nums[right]});
            ans = max(ans, minVal * (right - left + 1));
        }

        return ans;
    }
};
