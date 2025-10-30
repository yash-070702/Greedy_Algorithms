#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int mini=arr[0].front();
        int maxi=arr[0].back();
        int n=arr.size();

        int ans=0;

        for(int i=1;i<n;i++){
        int currMini=arr[i].front();
        int currMaxi=arr[i].back();

        ans=max(ans,abs(maxi-currMini));
        ans=max(ans,abs(currMaxi-mini));

        mini=min(mini,currMini);
        maxi=max(maxi,currMaxi);
        }
        return ans;
    }
};