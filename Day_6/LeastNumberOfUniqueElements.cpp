#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>freq;
        int count=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        for(auto it : arr){
         freq[it]++;
        }
      
        for(auto it : freq){
            pq.push({it.second,it.first});
        }

       while(k){ 
       
       if(pq.empty())
       return 0;

       auto top=pq.top();
       pq.pop();

       int fre=top.first;
       int num=top.second;

       if(fre==k)
       {
       return pq.size();
       }

       else if(fre<k){
        k-=fre;
       }

       else{
        fre-=k;
        k=0;
        pq.push({fre,num});
       }
     
    }
return pq.size();
    }
};