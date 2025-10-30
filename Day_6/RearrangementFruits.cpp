#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
       unordered_map<int,int>mp;

       for(int it:basket1){
        mp[it]++;
       }

       for(int it:basket2){
        mp[it]--;
       }

       vector<int>extra;

       for(auto it : mp){
        if(it.second&1)
        return -1;

        for(int i=0;i<abs(it.second)/2;i++){
            extra.push_back(it.first);
        }
       }

       if(extra.size()==0)
       return 0;

       long long cost=0;


       int mini=min(*min_element(basket1.begin(),basket1.end()),*min_element(basket2.begin(),basket2.end()));

       sort(extra.begin(),extra.end());
       
       int n=extra.size()/2;

       for(int i=0;i<n;i++){
        cost+=min((long long)extra[i],2LL*mini);
       }
     return cost;
    }
};