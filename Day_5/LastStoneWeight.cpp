#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       priority_queue<int>pq;
       int n=stones.size();

       for(int it : stones){
        pq.push(it);
       }

       while(!pq.empty()){
        int first=pq.top();
        pq.pop();
        
        if(pq.empty())
        return first;

        int second=pq.top();
        pq.pop();

        if(first==second)
        continue;

        else
        pq.push(abs(first-second));
        
       }
return 0;
    }
};