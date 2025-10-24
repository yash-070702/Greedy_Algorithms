#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        stack<pair<char,int>>st;

        int i=0;
        int n=colors.size();

        while(i<n){
        if(st.empty() || st.top().first!=colors[i]){
            st.push({colors[i],i});
        }

        else{
            if(neededTime[st.top().second]<=neededTime[i]){
                ans+=neededTime[st.top().second];
                st.pop();
                st.push({colors[i],i});
            }
            else{
                ans+=neededTime[i];
            }
        }
        i++;
        }
        return ans;
    }
};