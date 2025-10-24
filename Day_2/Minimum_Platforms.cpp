#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    int minPlatform(vector<int>& arr, vector<int>& dep) {
    int n=arr.size();
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    
    int maxPlatform=0;
    int currPlatform=0;
    
    int i=0,j=0;
    
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            currPlatform++;
            maxPlatform=max(maxPlatform,currPlatform);
            i++;
        }
        else{
            currPlatform--;
            j++;
        }
    }
    return maxPlatform;
    }
};
