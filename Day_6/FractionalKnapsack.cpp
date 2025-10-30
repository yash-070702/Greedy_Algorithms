#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        priority_queue<pair<double,pair<int,int>>>pq;
        int n=val.size();
        
        for(int i=0;i<n;i++){
            pq.push({(double)val[i]/wt[i],{val[i],wt[i]}});
        }
        
        double profit=0.0;
        
        while(capacity>0 && !pq.empty()){
            auto top=pq.top();
            pq.pop();
            
            double ratio=top.first;
            int currVal=top.second.first;
            int currWt=top.second.second;
            
            if(capacity==currWt){
                capacity=0;
                profit+=(double)currVal;
                break;
            }
            
            else if(capacity>currWt){
                capacity-=currWt;
                profit+=(double)currVal;
            }
            
            else{
                profit+=(capacity*ratio);
                capacity=0;
                break;
            }
        }
        
        return profit;
    }
};
