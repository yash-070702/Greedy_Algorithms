#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reorganizeString(string str) {
    unordered_map<char,int>mp;
     
    for(char it : str){
        mp[it]++;
    }
    priority_queue<pair<int,char>>pq;

    for(auto it : mp){
        pq.push({it.second,it.first});
    }

    string ans="";

    while(!pq.empty()){
        auto top=pq.top();
        pq.pop();

        int freq=top.first;
        char letter=top.second;

        if(freq>1 && pq.empty())
        return "";

        if(freq==1){
            ans+=letter;
        }

        else {
            ans+=letter;
            freq--;

            auto sec=pq.top();
            pq.pop();
            int fr=sec.first;
            char let=sec.second;

            ans+=let;
            fr--;

            if(fr>0)
            pq.push({fr,let});
            pq.push({freq,letter});
        }
    }
return ans;
    }
};