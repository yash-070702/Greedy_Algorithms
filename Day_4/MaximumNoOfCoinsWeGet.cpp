#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int k=n/3;
        int sum=0;

        priority_queue<int>pq;

        sort(piles.begin(),piles.end());
        
    
        for(int i=k;i<n;i++){
            pq.push(piles[i]);
        }

        while(!pq.empty()){
            pq.pop();
            sum+=pq.top();
            pq.pop();
        }
      
       return sum;
    }
};