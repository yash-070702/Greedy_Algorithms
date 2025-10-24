#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        priority_queue<int,vector<int>,greater<int>>minHeap;
        int n=capacity.size();
        int count=0;

        for(int i=0;i<n;i++){
            int req=capacity[i]-rocks[i];

            if(req==0){
                count++;
                continue;
            }

            else{
                minHeap.push(req);
            }
        }

        while(additionalRocks>0 && !minHeap.empty()){
            int currReq=minHeap.top();
            minHeap.pop();

            if(currReq>additionalRocks)
            return count;

            else{
                additionalRocks-=currReq;
                count++;
            }
        }
        return count;
    }
};