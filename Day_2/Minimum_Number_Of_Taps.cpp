#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int minTaps(int n, vector<int>& ranges) {
        vector<int>mp(n+1,0);

        for(int i=0;i<ranges.size();i++){
            int start=max(0,i-ranges[i]);
            int end=min(n,i+ranges[i]);

            mp[start]=max(mp[start],end);
        }

       
        int farthest=0;
        int end=0;
      
        int count=0;

        for(int i=0;i<n;i++){
            if(i>farthest)
            return -1;

            farthest=max(farthest,mp[i]);

            if(i==end){
              if(farthest==end)
                return -1;
             
              end=farthest;
              count++;

            }
        }
        return count;
    }
};