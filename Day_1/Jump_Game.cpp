#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int n;
    int maxReach=0;
  
    bool canReach(vector<int> &arr) {
        n=arr.size();
       
        for(int i=0;i<n;i++){
            if(i>maxReach)
            return false;
            
            maxReach=max(maxReach,i+arr[i]);
            
            if(maxReach>=n-1)
            return true;
        }
        return true;
    }
};
