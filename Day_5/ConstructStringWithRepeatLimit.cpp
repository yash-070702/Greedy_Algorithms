#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string repeatLimitedString(string str, int repeatLimit) {
        int n=str.size();
        priority_queue<pair<char,int>>pq;
        unordered_map<char,int>mp;

        for(char it : str){
            mp[it]++;
        }

        for(auto it : mp){
            pq.push({it.first,it.second});
        }

        string ans="";

        while(!pq.empty()){
            auto top=pq.top();
            char letter=top.first;
            int freq=top.second;
            pq.pop();

            if(freq<=repeatLimit){
            ans.append(freq,letter);
            }


            else{
            ans.append(repeatLimit,letter);
            freq-=repeatLimit;

            if(pq.empty())
            break;
            
            auto sec=pq.top();
            pq.pop();

            char secLet=sec.first;
            int fr=sec.second;

            fr--;
            ans.append(1,secLet);
            pq.push({letter,freq});

            if(fr>0){
                pq.push({secLet,fr});
            }
            }
        }
      return ans;
    }
};