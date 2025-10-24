#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    static bool cmp(vector<int>&a , vector<int>&b){
        return a[1]<b[1];
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);

        int count=0;
        int lastEnd=INT_MIN;

        for(auto it : pairs){
            if(it[0]>lastEnd){
                count++;
                lastEnd=it[1];
            }
        }
        return count;
    }
};