#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
      map<int,int>mp;

      for(auto trip : trips){
        mp[trip[1]]+=trip[0];
        mp[trip[2]]-=trip[0];
      }

      int passenger=0;

      for(auto it : mp){
        passenger+=it.second;

        if(passenger>capacity)
        return false;
      }
      return true;
    }
};



